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
#include "config_common.h"

#if ENABLE_APPLE_FN_KEY
#   define VENDOR_ID 0x05AC
#   define PRODUCT_ID 0x021E
#else
#   define VENDOR_ID 0xA8F8
#   define PRODUCT_ID 0x1829
#endif

#define DEVICE_VER 0x0001
#define MANUFACTURER Bastard Keyboards
#define PRODUCT Scylla

#define MATRIX_ROWS 10
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }

#define RGB_DI_PIN D2
#define RGBLED_NUM 58
#define RGBLED_SPLIT { 29, 29 }
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_ANIMATIONS
#define DEBOUNCE 5
#define SOFT_SERIAL_PIN D0
#define MASTER_RIGHT

#define TAPPING_TOGGLE 2

#define ONESHOT_TAP_TOGGLE 1  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

// Home Row Mods
// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 160

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

#ifdef RGBLIGHT_ENABLE
#   define RGBLED_NUM 58
#   define RGBLED_SPLIT { 29, 29 }
#   define RGBLIGHT_LIMIT_VAL 50
#   define RGBLIGHT_ANIMATIONS
#endif

// RGB matrix support
#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define DRIVER_LED_TOTAL 58 // Number of LEDs
#    define RGB_MATRIX_SPLIT { 29, 29 }
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#endif
