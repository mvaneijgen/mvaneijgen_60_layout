/* Copyright 2019 Mitchel van Eijgen
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
#include QMK_KEYBOARD_H
#define _BASE 0
#define _NUMSYM 1
#define _CTRL 2
#define _GAME 3
#define _RESET 4

//------------------------------------------------------//
// 🏠️ Home row mods 
//------------------------------------------------------//
// _BASE
// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_BSLS RCTL_T(KC_BSLS)

// Using non-basic keycodes in mod-taps https://precondition.github.io/home-row-mods#using-non-basic-keycodes-in-mod-taps
// Left-hand home row mods symbols layer
#define CTL_TL LCTL_T(KC_F23)
#define ALT_LCBR LALT_T(KC_F23)
#define GUI_LPRN LGUI_T(KC_F23)
#define SFT_LBRC LSFT_T(KC_F23)

// Right-hand home row mods symbols layer
#define SFT_RBRC RSFT_T(KC_F22)
#define GUI_RPRN RGUI_T(KC_F22)
#define ALT_RCBR LALT_T(KC_F22)
#define CTL_GT RCTL_T(KC_F22)
// END 🏠️ Home row mods -------------------------------------//

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
		LT(_RESET, KC_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_MPLY, 
		KC_CAPS, CTL_A, ALT_S, GUI_D, SFT_F, KC_G, KC_H, SFT_J, GUI_K, ALT_L, CTL_BSLS, KC_QUOT, KC_SCLN, KC_VOLU, 
		KC_LSFT, KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_DOT, KC_COMMA, KC_SLSH, KC_DEL, KC_UP, KC_VOLD, 
		KC_LCTL, KC_LALT, MO(_NUMSYM), KC_SPC, MO(_CTRL), KC_NO, KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [_NUMSYM] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_ENT, KC_MPLY, 
		KC_TRNS, CTL_TL, ALT_LCBR, GUI_LPRN, SFT_LBRC, KC_QUOT, KC_DQT, KC_RBRC, KC_RPRN, KC_RCBR, KC_GT, KC_QUOT, KC_BSLS, KC_VOLU, 
		KC_TRNS, KC_TILD, KC_UNDS, KC_MINS, KC_SLSH, KC_COLN, KC_SLSH, KC_SCLN, KC_BSLS, KC_PLUS, KC_COMMA, KC_DOT, KC_DEL, KC_UP, KC_VOLD, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, TG(_GAME), MO(_RESET), KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [_CTRL] = LAYOUT(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_BRMD, KC_BRMU, RSFT_T(KC_VOLD), RGUI_T(KC_MPLY), LALT_T(KC_VOLU), RCTL_T(KC__MUTE), KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MRWD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, TG(_GAME), KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [_GAME] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_MPLY, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC__VOLUP, 
		KC_LSFT, KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_UP, MO(_RESET), 
		KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [_RESET] = LAYOUT(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, TG(_BASE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
		 // Left-hand home row mods symbols layer
			case CTL_TL: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_LT); } return false; }
			case ALT_LCBR: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_LCBR); } return false; }
			case GUI_LPRN: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_LPRN); } return false; }
			case SFT_LBRC: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_LBRC); } return false; }
			// Right-hand home row mods symbols layer
			case SFT_RBRC: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_RBRC); } return false; }
			case GUI_RPRN: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_RPRN); } return false; }
			case ALT_RCBR: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_RCBR); } return false; }
			case CTL_GT: if (record->tap.count > 0) { if (record->event.pressed) { tap_code16(KC_GT); } return false; }

			break;
   }
   return true;
}