/*
 * dbroqua HHKB Layout
 */
#include "hhkb.h"

#define MAC 0
#define WIN 1
#define NAV 2
#define MOUSE 3
#define SPC 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* MAC Layer (DEFAULT)
     * ,-----------------------------------------------------------------------------------------.
     * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  | DEL |
     * |-----------------------------------------------------------------------------------------+
     * | Tab    |  Q  |  W  |  F  |  P  |  G  |  J  |  L  |  U  |  Y  |  ;  |  [  |  ]  |  Bksp  |
     * |-----------------------------------------------------------------------------------------+
     * | Ctrl    |  A  |  R  |  S  |  T  |  D  |  H  |  N  |  E  |  I  |  O  |  '  |    Enter    |
     * |-----------------------------------------------------------------------------------------+
     * | Shift     |  Z  |  X  |  C  |  V  |  B  |  K  |  M  |  ,  |  .  |  /  | Shift     | fn  |
     * +-----------------------------------------------------------------------------------------+
     *         | Gui |  Alt   |               Space               | AltGr |Mouse|
     *         `----------------------------------------------------------------´
     */
    [MAC] = KEYMAP(
        KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,    KC_BSLS,  KC_DEL, \
        KC_TAB,   KC_Q,  KC_W,  KC_F,  KC_P,  KC_G,  KC_J,  KC_L,  KC_U,     KC_Y,    KC_SCLN,  KC_LBRC,  KC_RBRC,   KC_BSPC,          \
        KC_LCTL,  KC_A,  KC_R,  KC_S,  KC_T,  KC_D,  KC_H,  KC_N,  KC_E,     KC_I,    KC_O,     KC_QUOT,  KC_ENT,                      \
        KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_K,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,  MO(FN),                    \
                        KC_LGUI, KC_LALT,  /*        */ KC_SPC, KC_RALT, MO(MOUSE)
    ),

    /* WIN Layer
     * ,-----------------------------------------------------------------------------------------.
     * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  | DEL |
     * |-----------------------------------------------------------------------------------------+
     * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  Bksp  |
     * |-----------------------------------------------------------------------------------------+
     * | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
     * |-----------------------------------------------------------------------------------------+
     * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | Shift     | fn  |
     * +-----------------------------------------------------------------------------------------+
     *         | Gui |  Alt   |               Space               | AltGr |Mouse|
     *         `----------------------------------------------------------------´
     */
    [WIN] = KEYMAP(
        KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,    KC_BSLS,  KC_GRV, \
        KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,   KC_BSPC,          \
        KC_LCTL,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,                      \
        KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,  MO(FN),                    \
                        KC_LGUI, KC_LALT,  /*        */ KC_SPC, KC_LALT, MO(MOUSE)
    ),

    /* MOUSE Layer
     * ,-----------------------------------------------------------------------------------------.
     * |     |      |     |     |     |     |     |     |     |     |     |     |     |     |    |
     * |-----------------------------------------------------------------------------------------+
     * |        |     | WUp |     |     |     |     |     |     |     |  Up |     | Btn2|        |
     * |-----------------------------------------------------------------------------------------+
     * |         | WLt | WDn | WRt |     |     |     |     |     | Left| Down| Right|            |
     * |-----------------------------------------------------------------------------------------+
     * |           |     |     |     |     |     |     |     | Mute| VolD| VolU|           |     |
     * +-----------------------------------------------------------------------------------------+
     *         |     |        |                                   |       |     |
     *         `----------------------------------------------------------------´
     */
    [NAV] = KEYMAP(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS, \
        KC_TRNS,  KC_TRNS,  KC_WH_U,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_HOME,  KC_UP,     KC_END,  KC_BTN2,  KC_TRNS,          \
        KC_TRNS,  KC_WH_L,  KC_WH_D,  KC_WH_R,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_TRNS,                    \
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BTN3,  KC_MS_D,  KC_TRNS,  KC_TRNS,                    \
                        KC_TRNS, KC_TRNS,           KC_TRNS,                KC_TRNS, KC_TRNS
    )

    /* MOUSE Layer
     * ,-----------------------------------------------------------------------------------------.
     * |     |      |     |     |     |     |     |     |     |     |     |     |     |     |    |
     * |-----------------------------------------------------------------------------------------+
     * |        |     | WUp |     |     |     |     |     |     |     | Btn1|  Up | Btn2|        |
     * |-----------------------------------------------------------------------------------------+
     * |         | WLt | WDn | WRt |     |     |     |     |     |     | Left |Right|            |
     * |-----------------------------------------------------------------------------------------+
     * |           |     |     |     |     |     |     |     |     | Btn3| Down|           |     |
     * +-----------------------------------------------------------------------------------------+
     *         |     |        |                                   |       |     |
     *         `----------------------------------------------------------------´
     */
    [SPC] = KEYMAP(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS, \
        KC_TRNS,  KC_TRNS,  KC_WH_U,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_TRNS,          \
        KC_TRNS,  KC_WH_L,  KC_WH_D,  KC_WH_R,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MS_L,  KC_MS_R,  KC_TRNS,                    \
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BTN3,  KC_MS_D,  KC_TRNS,  KC_TRNS,                    \
                        KC_TRNS, KC_TRNS,           KC_TRNS,                KC_TRNS, KC_TRNS
    )
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
