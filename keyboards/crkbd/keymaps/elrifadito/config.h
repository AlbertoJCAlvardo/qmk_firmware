/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once
// #define COMBO_COUNT 2
// ### define master o slave{{{
#define MASTER_LEFT
// #define EE_HANDS
// #define MASTER_RIGHT
// }}}
// ### WPM config {{{
#define SPLIT_ENABLE
#define SPLIT_USB_DETECT
#define SPLIT_WPM_ENABLE
#define BACKLIGHT_ON_STATE 0
//}}}
// ### OLED config {{{
// #define OLED_BRIGHTNESS 120
// #define OLED_DISABLE_TIMEOUT
// #define SPLIT_OLED_ENABLE
//}}}
// ### activar solo si BONGOCAT_KEYBOARD = yes DOG = true {{{


// activar solo si BONGOCAT_KEYBOARD = yes DOG = true }}}
// ### OLED_FONT_H {{{
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
// }}}
// ### size optimisations {{{
// size optimisations
// #define NO_DEBUG
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERR

// }}}
// vim: set sw=2 ts=2 sts=2 et ft=c fdm=marker:
