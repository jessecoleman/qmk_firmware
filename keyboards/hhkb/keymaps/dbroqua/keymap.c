/*
 * dbroqua HHKB Layout
 */
#include "hhkb.h"

#define MAC 0
#define WIN 1
#define NIX 2
#define NAV 3
#define MOU 4
#define SPA 5

enum {
  CTL_BSPC = 0,
  CTL_BSLS = 1,
  SFT_LPRN = 2, 
  SFT_RPRN = 3,
  ALT_LBRC = 4,
  ALT_RBRC = 5
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [CTL_BSPC] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, LCTL(KC_BSPC)),
  [CTL_BSLS] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, LCTL(KC_BSLS)),
  [SFT_LPRN] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, LSFT(KC_9)),
  [SFT_RPRN] = ACTION_TAP_DANCE_DOUBLE(LT(NAV, KC_BSLS), LSFT(KC_0)),
  [ALT_LBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_LBRC),
  [ALT_RBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_RBRC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* MAC Layer (DEFAULT)
     * ,-----------------------------------------------------------------------------------------.
     * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  `  | DEL |
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
        KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,    KC_0,  KC_MINS,   KC_EQL,  KC_GRV,  KC_DEL, \
        KC_TAB,   KC_Q,  KC_W,  KC_F,  KC_P,  KC_G,  KC_J,  KC_L,  KC_U,    KC_Y, KC_SCLN,  KC_LBRC,  KC_RBRC, TD(CTL_BSPC),          \
        GUI_T(KC_BSPC),  KC_A,  KC_R,  KC_S,  KC_T,  KC_D,  KC_H,  KC_N,    KC_E,    KC_I,     KC_O,  KC_QUOT,  KC_ENT,                      \
        TD(SFT_LPRN)  ,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_K,  KC_M, KC_COMM,  KC_DOT,  KC_SLSH,   LT(NAV, KC_BSLS),  MO(MOU),                    \
                        KC_LCTL, KC_LGUI,            LT(SPA, KC_SPC),            KC_RALT,  KC_RCTL
    ),

    /* WIN Layer
     * ,-----------------------------------------------------------------------------------------.
     * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  `  | DEL |
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
        KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,     KC_9,    KC_0,  KC_MINS,   KC_EQL,  KC_GRV,  KC_DEL,   \
        KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,  KC_LBRC,  KC_RBRC, TD(CTL_BSLS),       \
        CTL_T(KC_BSLS),  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,     KC_K,    KC_L,  KC_SCLN,  KC_QUOT,  KC_ENT,            \
        TD(SFT_LPRN),    KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  LT(NAV, KC_BSPC),  MO(MOU),\
                        KC_LGUI, TD(ALT_LBRC),            LT(SPA, KC_SPC),          TD(ALT_RBRC), KC_RGUI
    ),


    /* WIN Layer
     * ,-----------------------------------------------------------------------------------------.
     * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  `  | DEL |
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
    [NIX] = KEYMAP(
        KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  \
        KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           \
        CTL_T(KC_ESC)  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           \
        KC_TRNS        , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           \
                         KC_LGUI, KC_LALT,           LT(SPA, KC_SPC),          KC_LALT, KC_RGUI
    ),

    /* NAV Layer
     * ,-----------------------------------------------------------------------------------------.
     * |     |      |     |     |     |     |     |     |     |     |     |     |     |     |    |
     * |-----------------------------------------------------------------------------------------+
     * |        |     | WUp |     |     |     |     |     | PGUP| HOME|  Up | END |     |        |
     * |-----------------------------------------------------------------------------------------+
     * |         | WLt | WDn | WRt |     |     |     |     | PGDN| Left| Down| Right|            |
     * |-----------------------------------------------------------------------------------------+
     * |           |     |     |     |     |     |     |     | Mute| VolD| VolU|           |     |
     * +-----------------------------------------------------------------------------------------+
     *         |     |        |                                   |       |     |
     *         `----------------------------------------------------------------´
     */
    [NAV] = KEYMAP(
        KC_TRNS,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,  KC_F11,    KC_F12,  KC_INS,   KC_TRNS, \
        KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_HOME,    KC_UP,   KC_END,  KC_TRNS,  KC_TRNS,          \
        KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_TRNS,                    \
        TD(SFT_RPRN),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_TRNS,                    \
                       KC_TRNS,  KC_TRNS,                      KC_TRNS,                      KC_TRNS,  KC_TRNS
    ),

    /* MOUSE Layer
     * ,-----------------------------------------------------------------------------------------.
     * |     |      |     |     |     |     |     |     |     |     |     |     |     |     |    |
     * |-----------------------------------------------------------------------------------------+
     * |        | Btn3|  MUp| Btn2| WUp |     |     |     |     |     | Btn1|  Up | Btn2|        |
     * |-----------------------------------------------------------------------------------------+
     * |         | MLt | MDn | MRt | WDn |     |     |     |     |     | Left |Right|            |
     * |-----------------------------------------------------------------------------------------+
     * |           | Btn4| Btn5| WLt | WRt |     |     |     |     | Btn3| Down|           |     |
     * +-----------------------------------------------------------------------------------------+
     *         |     |        |               Btn1                |       |     |
     *         `----------------------------------------------------------------´
     */
    [MOU] = KEYMAP(
        KC_TRNS,  KC_ACL0,  KC_ACL1,  KC_ACL2,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSLS,  KC_PAST,   KC_PMNS, \
        KC_TRNS,  KC_BTN3,  KC_MS_U,  KC_BTN2,  KC_WH_U,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_7,     KC_8,     KC_9,  KC_PPLS,          \
        KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_WH_D,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_4,     KC_5,     KC_6,  KC_PENT,                    \
        KC_TRNS,  KC_BTN4,  KC_BTN5,  KC_WH_L,  KC_WH_R,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_1,     KC_2,     KC_3,   KC_ESC,  KC_TRNS,                    \
                            KC_TRNS,  KC_TRNS,                      KC_BTN1,                         KC_0,   KC_DOT
    ),

    /* SPACE Layer
     * ,-----------------------------------------------------------------------------------------.
     * |     |      |     |     |     |     |     |     |     |     |     |     |     |     |    |
     * |-----------------------------------------------------------------------------------------+
     * |        |     | MUp |     |     |     |     |     |     |     | Btn1|  Up | Btn2|        |
     * |----------------------------------------------------------------------------------------+
     * |         | MLt | MDn | MRt |     |     |     |     |     |     | Left |Right|            |
     * |-----------------------------------------------------------------------------------------+
     * |           |     |     |     |     |     |     |     |     | Btn3| Down|           |     |
     * +-----------------------------------------------------------------------------------------+
     *         |     |        |                                   |       |     |
     *         `----------------------------------------------------------------´
     */
    [SPA] = KEYMAP(
        TG(WIN),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TG(NIX),\
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          \
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,   KC_END,  KC_TRNS,                    \
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,LCTL(KC_0),LCTL(KC_MINS),LCTL(KC_EQL),KC_TRNS,  KC_TRNS,              \
                            KC_TRNS,  KC_TRNS,                      KC_TRNS,            KC_TRNS, KC_TRNS
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