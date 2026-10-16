module clkdiv2(
    input inclk,
    output out
);
reg d;

always @(posedge inclk) begin
    d <= ~d;
end

assign out = d;

endmodule
