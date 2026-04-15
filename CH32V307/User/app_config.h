// Project-wide build-time feature toggles
#pragma once

// Enable following host's USB mixer for Volume/Mute (UAC2 Feature Unit)
// Set to 0 to disable build-time; device will ignore host volume/mute requests
#ifndef ENABLE_USB_VOLUME_FOLLOW
#define ENABLE_USB_VOLUME_FOLLOW 0
#endif

// Board clock source: set to 1 if the board populates Si5351 PLL
// Set to 0 on boards where DACs receive clock directly from CPLD
#ifndef BOARD_HAS_SI5351
#define BOARD_HAS_SI5351 0
#endif