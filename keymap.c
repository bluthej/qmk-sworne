/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_RBRC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NUHS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   MO(1), KC_LSFT,     KC_SPC,   MO(2), XXXXXXX
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,        KC_ESC,       XXXXXXX,       XXXXXXX,       XXXXXXX,        KC_INS,                      KC_PGUP, KC_HOME,   KC_UP,  KC_END, KC_CAPS, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+--------------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+--------------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, LCTL(KC_LBRC),    LCTL(KC_C),    LCTL(KC_H),       KC_LGUI,    LCTL(KC_U),                      XXXXXXX, KC_BSPC,  KC_TAB,  KC_APP,  KC_ENT, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+--------------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                        XXXXXXX, XXXXXXX, KC_TRNS,     KC_ENT,   MO(3), XXXXXXX
                                                                    //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------.                    ,-----------------------------------------------------.
            KC_GRV,         KC_1,      KC_UNDS,   RALT(KC_E),         KC_6,       KC_EQL,                         KC_7, KC_AMPR, KC_ASTR, KC_LPRN,    KC_0, XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                    |--------+--------+--------+--------+--------+--------|
        RALT(KC_Q), RALT(KC_SPC),   RALT(KC_2),   RALT(KC_3),         KC_4,         KC_5,                      KC_MINS,  KC_DLR, KC_PERC, KC_CIRC,    KC_8,    KC_V,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                    |--------+--------+--------+--------+--------+--------|
           XXXXXXX,   RALT(KC_Z),   RALT(KC_X),   RALT(KC_C),   RALT(KC_4),   RALT(KC_5),                      KC_RPRN, KC_EXLM,   KC_AT, KC_HASH,    KC_9, XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                        XXXXXXX,   MO(3), KC_TRNS,    KC_TRNS, XXXXXXX, XXXXXXX
                                                                    //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_MSTP, KC_MRWD, KC_MPLY, KC_MFFD, KC_BRIU,                       KC_F12,   KC_F7,   KC_F8,   KC_F9, LCTL(KC_8), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, KC_BRID,                       KC_F11,   KC_F4,   KC_F5,   KC_F6, LCTL(KC_0), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_MUTE, KC_VOLD, RCS(KC_H), KC_VOLU, RCS(KC_U),                   KC_F10,   KC_F1,   KC_F2,   KC_F3, LCTL(KC_RPRN), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, KC_TRNS,    KC_TRNS, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};
