#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN     1


// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        // left hand
        KC_GRV,        KC_1,      KC_2,    KC_3,   KC_4,   KC_5,   KC_6,
        KC_ESC,        KC_TAB,    KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,
        OSM(MOD_LSFT), KC_CAPS,   KC_A,    KC_S,   KC_D,   KC_F,   KC_G,
        KC_LCTL,       KC_LSHIFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
                                  KC_LWIN, KC_LALT,
                                    KC_SPC, TT(_FN),
                                    TASK, KC_INS,
                                    KC_LGUI, KC_LWIN,

        // right hand
        KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,   KC_EQL,    KC_BSPC,
        KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,      KC_LBRC,   KC_RBRC,
        KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,   KC_QUOT,   KC_ENT,
        KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,   KC_RSHIFT, KC_RCTL,
                          KC_RALT, KC_BSLS,
                      KC_ENT, KC_SPC,
                      OSM(MOD_RSFT), KC_RSHIFT,
                      KC_BSPC, KC_DEL
    ),

    [_FN] = LAYOUT_5x7(
        // left hand
        _______,   KC_F1,     KC_F2,      KC_F3,    KC_F4,     KC_F5,    KC_F6,
        _______,   _______,   _______,    KC_UP,    _______,   _______,  _______,
        _______,   _______,   KC_LEFT,    KC_DOWN,  KC_RGHT,   _______,  RESET,
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
                                  _______, _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                                                _______,   _______,
                                  KC_DEL, _______,
                                  _______, _______,
                                  _______, _______
    ),

};
