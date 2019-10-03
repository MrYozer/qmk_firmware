#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, KC_BSLS, LCTL_T(KC_LBRC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_QUOT, KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, TG(1), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, LCTL_T(KC_CAPS), KC_LGUI, TT(2), LALT_T(KC_SPC), KC_BSPC, KC_ENT, RALT_T(KC_APP), RCTL_T(KC_NO)),
	[1] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_F13, KC_F14, KC_PSLS, KC_MINS, KC_F16, KC_TRNS, KC_EQL, KC_PAST, KC_F18, KC_F19, KC_F20, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_ESC, KC_PPLS, KC_PMNS, KC_P7, KC_P8, KC_P9, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_F22, KC_F23, KC_F24, KC_TRNS, KC_PAST, KC_PSLS, KC_P4, KC_P5, KC_P6, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_VOLU, KC_ENT, KC_TRNS, KC_CIRC, KC_DOT, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_DEL, KC_BSPC, KC_TRNS, KC_TRNS)
};
