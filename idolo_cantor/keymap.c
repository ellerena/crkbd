#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_LGUI, KC_ENT, MO(2), MO(1), KC_SPC, KC_RALT),
	[1] = LAYOUT_split_3x6_3(KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_7, KC_8, KC_9, KC_MINS, KC_EQL, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_0, KC_4, KC_5, KC_6, KC_LBRC, KC_RBRC, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_3(KC_TAB, KC_BRIU, KC_VOLU, KC_NO, KC_NO, SGUI(KC_4), KC_HOME, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_TRNS, KC_BRID, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_TRNS, KC_CALC, KC_NO, KC_NO, KC_NO, LGUI(KC_DOT), KC_PGDN, QK_MACRO_1, QK_MACRO_2, KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_R), LGUI(KC_K), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_0:
                SEND_STRING("->");
                return false;
            case QK_MACRO_1:
                SEND_STRING(SS_LGUI("k1"));
                return false;
            case QK_MACRO_2:
                SEND_STRING(SS_LGUI("k2"));
                return false;
            case QK_MACRO_3:
                SEND_STRING(SS_LGUI("k3"));
                return false;
        }
    }

    return true;
};
