/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// Workarounds for sleep/wake issues
#define USB_SUSPEND_WAKEUP_DELAY 250

// NOTE: There is a bug in AVR deep sleep, which
// causes the MCU to stop responding in some cases.
// Disabling the watchdog prevents the MCU from entering
// power down, while still turning off LEDs, audio, etc.
// See qmk_firmware/issues/20087 for background
#undef WDT_vect

#if ENABLE_APPLE_FN_KEY
#   define VENDOR_ID 0x05AC
#   define PRODUCT_ID 0x021E
#else
#   define VENDOR_ID 0xA8F8
#   define PRODUCT_ID 0x1829
#endif

#define MATRIX_ROWS 10
#define MATRIX_COLS 6

/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5

#define MASTER_RIGHT

#define TAPPING_TOGGLE 2

#define ONESHOT_TAP_TOGGLE 1  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

// Home Row Mods
// https://docs.qmk.fm/#/tap_hold

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 160

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 50

// Force mod key hold if another key is pressed
#define PERMISSIVE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS

/* RGB settings. */
#define RGBLED_NUM 58
#define RGBLED_SPLIT \
    { 29, 29 }

/* RGB matrix support. */
#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define RGB_MATRIX_LED_COUNT RGBLED_NUM
#    define RGB_MATRIX_SPLIT RGBLED_SPLIT
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#endif
