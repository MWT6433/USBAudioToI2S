#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ULTRA DUAL OLED 开机画面生成 / 预览工具（128x64 SSD1306, u8g2）

功能：
1. 从工程内 u8g2_fonts.c 提取 u8g2_font_9x18_mf，逐像素解码字标文字
   （解码算法按 u8g2_font.c 原样移植，预览与固件渲染逐像素一致）。
2. 以 u8g2 同款算法（Bresenham 直线 / 中点圆弧段）仿真绘制开机画面。
3. 把 ultra_dual_silkscreen.svg 中的 Cirrus 条带标记光栅化为 1-bit XBM，
   输出 C 数组与布局常量，供 OLED.c 使用。

用法：python splash_gen.py   （在 docs/logo/ 目录下）
输出：splash_preview.png（终帧）、splash_frames.png（动画分镜）、
      stdout 打印 XBM 数组与布局常量。
"""
import re
import math
import os
from PIL import Image, ImageDraw

HERE = os.path.dirname(os.path.abspath(__file__))
FONTS_C = os.path.join(HERE, '..', '..', 'User', 'U8g2', 'u8g2_fonts.c')
SVG_PATH = os.path.join(HERE, 'ultra_dual_silkscreen.svg')

W, H = 128, 64

# ----------------------------------------------------------------------
# 1. u8g2 字体解码（移植自 u8g2_font.c，仅预览用）
# ----------------------------------------------------------------------

def c_string_unescape(s):
    """把 C 字符串字面量（含八进制转义）解码为 bytes。"""
    out = bytearray()
    i = 0
    while i < len(s):
        c = s[i]
        if c == '\\':
            m = re.match(r'([0-7]{1,3})', s[i + 1:i + 4])
            if m:
                out.append(int(m.group(1), 8))
                i += 1 + len(m.group(1))
            else:
                esc = s[i + 1]
                out.append({'n': 10, 'r': 13, 't': 9, '\\': 92, '"': 34,
                            "'": 39, '0': 0}.get(esc, ord(esc)))
                i += 2
        else:
            out.append(ord(c) & 0xFF)
            i += 1
    return bytes(out)


def extract_font(name):
    src = open(FONTS_C, encoding='utf-8', errors='replace').read()
    m = re.search(re.escape(name) + r'\[\d+\]\s*U8G2_FONT_SECTION\([^)]*\)\s*=\s*((?:"[^"]*"\s*)+);',
                  src, re.S)
    if not m:
        raise RuntimeError('font not found: ' + name)
    body = ''.join(re.findall(r'"([^"]*)"', m.group(1)))
    return c_string_unescape(body)


class U8g2Font:
    """只解码需要的 ASCII 字形，输出像素集合 + 步进。"""

    def __init__(self, data):
        self.d = data
        self.glyph_cnt = data[0]
        self.bits_per_0 = data[2]
        self.bits_per_1 = data[3]
        self.bpw = data[4]   # bits_per_char_width
        self.bph = data[5]   # bits_per_char_height
        self.bpx = data[6]   # bits_per_char_x
        self.bpy = data[7]   # bits_per_char_y
        self.bpd = data[8]   # bits_per_delta_x
        self.start_upper_A = (data[17] << 8) | data[18]
        self.start_lower_a = (data[19] << 8) | data[20]
        self.cache = {}

    def _find_glyph(self, enc):
        d = self.d
        pos = 23
        if enc >= ord('a'):
            pos += self.start_lower_a
        elif enc >= ord('A'):
            pos += self.start_upper_A
        while True:
            if d[pos + 1] == 0:
                return None
            if d[pos] == enc:
                return pos + 2
            pos += d[pos + 1]

    def glyph(self, ch):
        """返回 (width, height, xoff, yoff, delta, {(lx,ly)})"""
        if ch in self.cache:
            return self.cache[ch]
        p = self._find_glyph(ord(ch))
        if p is None:
            raise KeyError(ch)
        data, pos = self.d, p
        bit_pos = 0

        def rd(cnt):
            nonlocal pos, bit_pos
            val = data[pos]
            val >>= bit_pos
            bpc = bit_pos + cnt
            if bpc >= 8:
                s = 8 - bit_pos
                pos += 1
                val |= data[pos] << s
                bpc -= 8
            val &= (1 << cnt) - 1
            bit_pos = bpc
            return val

        def rsd(cnt):
            v = rd(cnt)
            return v - (1 << (cnt - 1))

        gw = rd(self.bpw)
        gh = rd(self.bph)
        x = rsd(self.bpx)
        y = rsd(self.bpy)
        delta = rsd(self.bpd)
        pixels = set()
        if gw > 0:
            lx, ly = 0, 0
            while True:
                a = rd(self.bits_per_0)
                b = rd(self.bits_per_1)

                def run(length, fg):
                    nonlocal lx, ly
                    cnt = length
                    while True:
                        rem = gw - lx
                        cur = rem if cnt >= rem else cnt
                        if fg:
                            for i in range(cur):
                                pixels.add((lx + i, ly))
                        if cnt < rem:
                            break
                        cnt -= rem
                        lx = 0
                        ly += 1
                    lx += cnt

                while True:
                    run(a, 0)
                    run(b, 1)
                    if rd(1) == 0:
                        break
                if ly >= gh:
                    break
        res = (gw, gh, x, y, delta, pixels)
        self.cache[ch] = res
        return res

    def str_size(self, s, spacing=0, bold=False):
        w = 0
        for i, ch in enumerate(s):
            gw, gh, x, y, delta, px = self.glyph(ch)
            w += delta + spacing
        w -= spacing if s else 0
        if bold:
            w += 1
        return w


# ----------------------------------------------------------------------
# 2. u8g2 同款图元仿真画布
# ----------------------------------------------------------------------

class Canvas:
    def __init__(self):
        self.px = [[0] * W for _ in range(H)]
        self.clip = None  # (x0, x1) 或 None

    def pixel(self, x, y, c=1):
        if 0 <= x < W and 0 <= y < H:
            if self.clip is None or (self.clip[0] <= x <= self.clip[1]):
                self.px[y][x] = c

    def hline(self, x, y, l, c=1):
        for i in range(l):
            self.pixel(x + i, y, c)

    def vline(self, x, y, l, c=1):
        for i in range(l):
            self.pixel(x, y + i, c)

    def box(self, x, y, w, h, c=1):
        for j in range(h):
            for i in range(w):
                self.pixel(x + i, y + j, c)

    def line(self, x1, y1, x2, y2, c=1):
        # 与 u8g2_DrawLine 相同的整数 Bresenham
        dx = abs(x2 - x1)
        dy = abs(y2 - y1)
        swapxy = 0
        if dy > dx:
            swapxy = 1
            dx, dy = dy, dx
            x1, y1 = y1, x1
            x2, y2 = y2, x2
        if x1 > x2:
            x1, x2 = x2, x1
            y1, y2 = y2, y1
        err = dx >> 1
        ystep = 1 if y2 > y1 else -1
        y = y1
        for x in range(x1, x2 + 1):
            self.pixel(y, x, c) if swapxy else self.pixel(x, y, c)
            err -= dy
            if err < 0:
                y += ystep
                err += dx

    # 圆弧段：与 u8g2_draw_circle_section 相同（U8G2_DRAW_UPPER_LEFT 等）
    def circle(self, x0, y0, rad, option, c=1):
        UUR, UUL, LLL, LRR = 1, 2, 4, 8  # 与 u8g2.h 一致

        def section(x, y):
            if option & UUR:
                self.pixel(x0 + x, y0 - y, c)
                self.pixel(x0 + y, y0 - x, c)
            if option & UUL:
                self.pixel(x0 - x, y0 - y, c)
                self.pixel(x0 - y, y0 - x, c)
            if option & LRR:
                self.pixel(x0 + x, y0 + y, c)
                self.pixel(x0 + y, y0 + x, c)
            if option & LLL:
                self.pixel(x0 - x, y0 + y, c)
                self.pixel(x0 - y, y0 + x, c)

        f = 1 - rad
        ddFx, ddFy = 1, -2 * rad
        x, y = 0, rad
        section(x, y)
        while x < y:
            if f >= 0:
                y -= 1
                ddFy += 2
                f += ddFy
            x += 1
            ddFx += 2
            f += ddFx
            section(x, y)

    def xbm(self, x, y, bw, bh, bits, c=1):
        row_bytes = (bw + 7) // 8
        for j in range(bh):
            for i in range(bw):
                byte = bits[j * row_bytes + (i >> 3)]
                if (byte >> (i & 7)) & 1:
                    self.pixel(x + i, y + j, c)

    def glyph(self, font, ch, x, y, c=1, bold=False):
        """在基线 (x,y) 画字形，返回步进 delta。"""
        gw, gh, xoff, yoff, delta, px = font.glyph(ch)
        tx = x + xoff
        ty = y - gh - yoff
        for (lx, ly) in px:
            self.pixel(tx + lx, ty + ly, c)
            if bold:
                self.pixel(tx + lx + 1, ty + ly, c)
        return delta

    def str(self, font, s, x, y, spacing=0, bold=False, c=1):
        cx = x
        for ch in s:
            d = self.glyph(font, ch, cx, y, c, bold)
            cx += d + spacing
        return cx - spacing - x

    def image(self, scale=4):
        img = Image.new('L', (W, H), 0)
        dr = ImageDraw.Draw(img)
        for yy in range(H):
            for xx in range(W):
                if self.px[yy][xx]:
                    dr.point((xx, yy), fill=255)
        return img.resize((W * scale, H * scale), Image.NEAREST)


# ----------------------------------------------------------------------
# 3. SVG 里 Cirrus 条带标记 → 1-bit XBM
# ----------------------------------------------------------------------

def parse_path(d):
    """极简 SVG path 解析（M/L/H/V/C/Z 及小写），返回多边形点列表的列表。"""
    tokens = re.findall(r'([MLHVCZmlhvcz])|(-?\d*\.?\d+(?:e-?\d+)?)', d)
    seq = []
    for cmd, num in tokens:
        if cmd:
            seq.append(cmd)
        else:
            seq.append(float(num))
    polys, cur, i = [], [], 0
    pos = [0.0, 0.0]
    start = [0.0, 0.0]

    def nums(n):
        nonlocal i
        vals = seq[i:i + n]
        i += n
        return vals

    while i < len(seq):
        cmd = seq[i]
        i += 1
        if cmd in 'Mm':
            if cur:
                polys.append(cur)
                cur = []
            a, b = nums(2)
            if cmd == 'm':
                pos[0] += a; pos[1] += b
            else:
                pos[0], pos[1] = a, b
            start = pos[:]
            cur.append(tuple(pos))
        elif cmd in 'Ll':
            a, b = nums(2)
            if cmd == 'l':
                pos[0] += a; pos[1] += b
            else:
                pos[0], pos[1] = a, b
            cur.append(tuple(pos))
        elif cmd in 'Hh':
            (a,) = nums(1)
            pos[0] = pos[0] + a if cmd == 'h' else a
            cur.append(tuple(pos))
        elif cmd in 'Vv':
            (a,) = nums(1)
            pos[1] = pos[1] + a if cmd == 'v' else a
            cur.append(tuple(pos))
        elif cmd in 'Cc':
            for _ in range(1000):
                if cmd == 'c':
                    c1 = (pos[0] + seq[i], pos[1] + seq[i + 1])
                    c2 = (pos[0] + seq[i + 2], pos[1] + seq[i + 3])
                    to = (pos[0] + seq[i + 4], pos[1] + seq[i + 5])
                else:
                    c1 = (seq[i], seq[i + 1])
                    c2 = (seq[i + 2], seq[i + 3])
                    to = (seq[i + 4], seq[i + 5])
                nums(6)
                p0 = tuple(pos)
                for k in range(1, 17):
                    t = k / 16.0
                    mt = 1 - t
                    x = mt**3 * p0[0] + 3 * mt**2 * t * c1[0] + 3 * mt * t**2 * c2[0] + t**3 * to[0]
                    y = mt**3 * p0[1] + 3 * mt**2 * t * c1[1] + 3 * mt * t**2 * c2[1] + t**3 * to[1]
                    cur.append((x, y))
                pos = list(to)
                # 连续隐式重复：下一个还是坐标则继续画 C
                if i >= len(seq) or isinstance(seq[i], str):
                    break
        elif cmd in 'Zz':
            cur.append(tuple(start))
            pos = start[:]
    if cur:
        polys.append(cur)
    return polys


def rasterize_cirrus(tw, th, ss=8, thresh=0.42):
    """把 SVG 中 Cirrus mark 两条 path 光栅化为 tw×th 的 1-bit 位图。"""
    svg = open(SVG_PATH, encoding='utf-8').read()
    grp = re.search(r'translate\(([\d.]+) ([\d.]+)\) scale\(([\d.]+)\)', svg)
    tx, ty, sc = map(float, grp.groups())
    marks = re.findall(r'<path d="([^"]+)"[^>]*/>\s*\n\s*<path d="([^"]+)"', svg)
    polys = []
    for d in re.findall(r'<path d="([^"]+)"', svg):
        if 'c' in d or 'C' in d:  # cirrus 两条曲线 path
            for poly in parse_path(d):
                polys.append([(x * sc + tx, y * sc + ty) for (x, y) in poly])
    if not polys:
        raise RuntimeError('cirrus paths not found in svg')
    # mark 自身坐标 bbox（translate 前）：直接用未变换的
    polys0 = []
    for d in re.findall(r'<path d="([^"]+)"', svg):
        if 'c' in d or 'C' in d:
            for poly in parse_path(d):
                polys0.append(poly)
    xs = [p[0] for poly in polys0 for p in poly]
    ys = [p[1] for poly in polys0 for p in poly]
    x0, x1, y0, y1 = min(xs), max(xs), min(ys), max(ys)
    sw, sh = x1 - x0, y1 - y0
    img = Image.new('L', (tw * ss, th * ss), 0)
    dr = ImageDraw.Draw(img)
    kx = tw * ss / sw
    ky = th * ss / sh
    for poly in polys0:
        pts = [((x - x0) * kx, (y - y0) * ky) for (x, y) in poly]
        if len(pts) >= 3:
            dr.polygon(pts, fill=255)
    small = img.resize((tw, th), Image.BOX)
    bits = []
    row_bytes = (tw + 7) // 8
    data = bytearray(row_bytes * th)
    for y in range(th):
        for x in range(tw):
            if small.getpixel((x, y)) >= int(255 * thresh):
                data[y * row_bytes + (x >> 3)] |= 1 << (x & 7)
    return data, row_bytes * th, (x0, y0, x1, y1)


# ----------------------------------------------------------------------
# 4. 开机画面布局（与 OLED.c 中常量一一对应）
# ----------------------------------------------------------------------

# —— 布局常量（固件同款）——
# 按丝印正稿等比缩放 s≈0.171（方框 140→24），弧半径取 5/11/17（2px 粗）
SP_FX, SP_FY = 59, 19     # 前层 ⌐ 角点
SP_LEN = 24               # 前层边长（竖线向下 / 横线向右）
SP_DX, SP_DY = 3, 3       # 后层相对偏移（原稿 20×s）
SP_BLEN = 24              # 后层顶边长度
SP_BSEG = (19, 8)         # 后层左边下段：y 偏移 + 长度（比前层探出 ~3px）
SP_ARCS = (5, 11, 17)     # 声波弧半径（圆心=前层角点，左上象限）
SP_ARC_THICK = 1          # 1px：双圈 2px 在小半径下厚度不均，反而难看
# 文字
SP_TEXT = "ULTRA DUAL"
SP_TSPACING = 3
SP_TY = 60                # 基线
SP_TBOLD = True
# Cirrus 标记（原稿 113.6×66.4 × s）
SP_MW, SP_MH = 20, 11
SP_MX, SP_MY = SP_FX + 2, SP_FY + 6

U8G2_DRAW_UPPER_LEFT = 2


def draw_mark(cv, cirrus_bits, cw, ch, cx, cy, arcs=3, front=True, back=True, mark=True):
    if arcs:
        for i, r in enumerate(SP_ARCS):
            if i < arcs:
                cv.circle(SP_FX, SP_FY, r, U8G2_DRAW_UPPER_LEFT)
                if SP_ARC_THICK > 1 and r > 1:
                    cv.circle(SP_FX, SP_FY, r - 1, U8G2_DRAW_UPPER_LEFT)
    if back:
        bx, by = SP_FX + SP_DX, SP_FY + SP_DY
        cv.hline(bx, by, SP_BLEN)                      # 后层顶边
        y0, l0 = SP_BSEG
        cv.vline(bx, SP_FY + y0, l0)                   # 后层左边下段
    if front:
        cv.vline(SP_FX, SP_FY, SP_LEN)
        cv.hline(SP_FX, SP_FY, SP_LEN)
    if mark and cirrus_bits is not None:
        cv.xbm(cx, cy, cw, ch, cirrus_bits)


def render_splash(font, cirrus_bits, cw, ch, cx, cy, frame=8):
    """frame 0..8，与固件帧序一致：
    0-2 弧逐条出现；3 +后层；4 +前层；5 +cirrus；6/7 文字居中展开(clip)；8 终帧"""
    cv = Canvas()
    draw_mark(cv, cirrus_bits, cw, ch, cx, cy,
              arcs=min(frame + 1, 3),
              back=(frame >= 3), front=(frame >= 4), mark=(frame >= 5))
    if frame >= 6:
        hw = (10, 26, 64)[min(frame - 6, 2)]   # 文字揭示半宽
        cv.clip = (W // 2 - hw, W // 2 + hw)
        tw = font.str_size(SP_TEXT, SP_TSPACING, SP_TBOLD)
        x = (W - tw) // 2
        cv.str(font, SP_TEXT, x, SP_TY, SP_TSPACING, SP_TBOLD)
        cv.clip = None
    return cv


def canvas_ascii(cv):
    return '\n'.join(''.join('#' if v else '.' for v in row) for row in cv.px)


def glyph_ascii(font, ch):
    gw, gh, x, y, d, px = font.glyph(ch)
    return '\n'.join(''.join('#' if (lx, ly) in px else '.'
                             for lx in range(gw)) for ly in range(gh)) + \
        '\n(w=%d h=%d x=%d y=%d d=%d)' % (gw, gh, x, y, d)


def main():
    font = U8g2Font(extract_font('u8g2_font_9x18_mf'))

    # ---- cirrus mark 光栅化（等比 s≈0.171）----
    cw, ch = SP_MW, SP_MH
    bits, nbytes, bbox = rasterize_cirrus(cw, ch)
    cx, cy = SP_MX, SP_MY

    # 终帧预览
    final = render_splash(font, bits, cw, ch, cx, cy, frame=8)
    final.image(4).save(os.path.join(HERE, 'splash_preview.png'))
    print(canvas_ascii(final))

    # 动画分镜（与固件帧序一致）
    strip = Image.new('L', (W * 4 * 3 + 4 * 12, H * 4 * 3 + 24), 60)
    for s in range(9):
        fcv = render_splash(font, bits, cw, ch, cx, cy, frame=s)
        col, row = s % 3, s // 3
        strip.paste(fcv.image(4), (12 + col * (W * 4 + 12), 12 + row * (H * 4 + 12)))
    strip.save(os.path.join(HERE, 'splash_frames.png'))

    # 输出 XBM C 数组
    rows = [bits[i:i + 12] for i in range(0, len(bits), 12)]
    print('/* Cirrus 条带标记 %dx%d XBM (u8g2_DrawXBM) */' % (cw, ch))
    print('static const uint8_t splash_cirrus_xbm[%d] = {' % len(bits))
    for r in rows:
        print('    ' + ','.join('0x%02X' % b for b in r) + ',')
    print('};')
    print('/* 布局: fx=%d fy=%d len=%d dx=%d dy=%d blen=%d bseg=%s arcs=%s text@y=%d spac=%d bold=%d mark(%d,%d %dx%d) */'
          % (SP_FX, SP_FY, SP_LEN, SP_DX, SP_DY, SP_BLEN, SP_BSEG, SP_ARCS,
             SP_TY, SP_TSPACING, SP_TBOLD, cx, cy, cw, ch))
    print('XBM %d bytes; svg mark bbox=%s' % (nbytes, bbox))


if __name__ == '__main__':
    main()
