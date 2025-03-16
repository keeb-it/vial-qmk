// Copyright 2023 numToStr (@numToStr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 220U // Timeout window in ms in which the double tap can occur.
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP0 // Specify a optional status led by GPIO number which blinks when entering the bootloader

// /* Matrix size */
// #define MATRIX_ROWS 2
// #define MATRIX_COLS 3
//
//         // "cols": ["GP29", "GP28", "GP27"],
//         // "rows": ["GP26", "GP2"]
//
// /* Pin-out */
// #define MATRIX_ROW_PINS { GP26, GP2 }
//
// /* The pin connecting to the SN74HC165 SH/~LD in */
// #define ROW_SHIFT_PIN GP14

#define SPI_DRIVER SPID0

// #define SPI_LATCH_PIN GP1 /* io_cs */
// #define SPI_SCK_PIN GP2
// #define SPI_MISO_PIN GP4
// #define SPI_MOSI_PIN GP3

#define SPI_LATCH_PIN GP21 /* io_cs */
#define SPI_SCK_PIN GP22
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP23
#define SPI_MODE 3

//rp2040 supports nothing else
#define SPI_lsbFirst false

#define SPI_DIVISOR 32

//#define DEBUG_MATRIX_SCAN_RATE


//0x0001, 0x0002, 0x0004, 0x0008, 0x0010, 0x0020, 0x0040, 0x0080, 0x0100, 0x0200, 0x0400, 0x0800, 0x1000, 0x2000, 0x4000, 0x8000
// 1QA     1QB     1QC     1QD     1QE     1QF     1QG     1QH     2QA     2QB     2QC     2QD     2QE     2QF     2QG     2QH

//                 C0    C1       C1       C3     C4      C5     C6        C7      C8     C9      C10    C11      C12
//                 2QH     2QG     2QF      2QE     2QD   2QC       2QB   2QA      1QH    1QG      1QF    1QE      1QA
// #define COLS {0x8000, 0x4000, 0x2000, 0x1000, 0x0800, 0x0400, 0x0200, 0x0100, 0x0080, 0x0040, 0x0020, 0x0010, 0x0001}
#define COLS {0x0010, 0x0020, 0x0040}
