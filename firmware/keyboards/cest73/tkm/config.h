#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBADD
#define PRODUCT_ID      0xAA55
#define DEVICE_VER      0x0001
#define MANUFACTURER    cest73
#define PRODUCT         "Ten Key Mirrored 2021 Release 1.03"

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 10

/* matrix sz handy ruler:  1   2   3   4   5   6   7   8   9  10  11  12 */
/* key matrix pins */
/*    row    handy ruler: r0  r1  r2  r3  r4  r5  r6  r7  r8  r9  r10 */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B5, B6, B7, C6, C7, D0 }
/*    column handy ruler: c0  c1  c2  c3  c4  c5  c6  c7  c8  c9 */
#define MATRIX_COL_PINS { D1, D2, D3, D4, D5, D6, D7, F0, F1, F4 }
#define UNUSED_PINS

/* the LEDs: 
 *  PF5 - CAPS
 *  PF6 - NUM
 *  PF7 - SCLK
 *  PE6 - Backlight */
 #define BACKLIGHT_PIN E6

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* force n-key rollover*/
#define FORCE_NKRO
