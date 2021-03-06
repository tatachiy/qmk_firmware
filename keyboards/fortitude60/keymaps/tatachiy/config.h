/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#define USE_SERIAL

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

#define PERMISSIVE_HOLD
//#define RETRO_TAPPING
#define TAPPING_TERM 200 // 200
//#define IGNORE_MOD_TAP_INTERRUPT
#undef IGNORE_MOD_TAP_INTERRUPT

/* #undef RGBLED_NUM */
/* #define RGBLIGHT_ANIMATIONS */
/* #define RGBLED_NUM 12 */
/* #define RGBLIGHT_HUE_STEP 8 */
/* #define RGBLIGHT_SAT_STEP 8 */
/* #define RGBLIGHT_VAL_STEP 8 */

//#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 0

//#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 150

//#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 3

//#undef MOUSEKEY_MOVE_DELTA
#define MOUSEKEY_MOVE_DELTA 5

//#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0

#endif
