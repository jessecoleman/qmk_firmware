/*
 * dbroqua HHKB Layout
 */
#include "hhkb.h"

#define WIN 0
#define MAC 1
#define NIX 2
#define ALT 3
#define MOU 4
#define SPA 5

enum {
  CTL_BSPC = 0,
  CTL_BSLS = 1,
  ALT_M = 2,
  SPC_B = 3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
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
        KC_ESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,    KC_0,  KC_MINS,  KC_EQL, KC_BSPC,  KC_DEL,   \
        KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,    KC_P,  KC_LBRC,   KC_RBRC, KC_BSLS,       \
          M(1),  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,  KC_SCLN,  KC_QUOT,  CTL_T(KC_ENT),            \
          KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, SFT_T(KC_BSPC), M(8),\
                      KC_LGUI,ALT_T(KC_MINS),            LT(SPA, KC_SPC),          ALT_T(KC_EQL), KC_RGUI
    ),

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
     *         | Gui |  Alt   |               Space               | AltGr | Gui |
     *         `----------------------------------------------------------------´
     */
    [MAC] = KEYMAP(
        KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,    KC_0,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL, \
        KC_TAB,   KC_Q,  KC_W,  KC_F,  KC_P,  KC_G,  KC_J,  KC_L,  KC_U,    KC_Y, KC_SCLN,  KC_MINS,   KC_EQL, KC_BSPC,          \
          M(2),   KC_A,  KC_R,  KC_S,  KC_T,  KC_D,  KC_H,  KC_N,  KC_E,    KC_I,     KC_O,  KC_QUOT, GUI_T(KC_ENT),                      \
        KC_TRNS,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_K,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, SFT_T(KC_BSLS),  M(8),                    \
                         KC_LCTL,  GUI_T(KC_LBRC),            LT(SPA, KC_SPC),            ALT_T(KC_RBRC),  KC_RCTL
    ),

    /* NIX Layer
     * ,-----------------------------------------------------------------------------------------.
     * |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  `  | DEL |
     * |-----------------------------------------------------------------------------------------+
     * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  Bksp  |
     * |-----------------------------------------------------------------------------------------+
     * | Ctl/Esc |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
     * |-----------------------------------------------------------------------------------------+
     * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | Shift     | fn  |
     * +-----------------------------------------------------------------------------------------+
     *         | Gui |  Alt   |               Space               | AltGr | Gui |
     *         `----------------------------------------------------------------´
     */
    [NIX] = KEYMAP(
        KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  \
        KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           \
        CTL_T(KC_ESC)  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           \
        KC_TRNS        , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           \
                         KC_LGUI,  ALT_T(KC_LBRC),            LT(SPA, KC_SPC),          ALT_T(KC_RBRC), KC_RGUI
    ),

    /* NAV Layer
     * ,-----------------------------------------------------------------------------------------.
     * |    |  F1 |  F2  |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 | Ins | Del |
     * |-----------------------------------------------------------------------------------------+
     * |        |     |     |     |     |     |     |     | PGUP| HOME|  Up | END |     |        |
     * |-----------------------------------------------------------------------------------------+
     * |         |     |     |     |     |     |     |     | PGDN| Left| Down| Right|            |
     * |-----------------------------------------------------------------------------------------+
     * |           |     |     |     |     |     |     |     | Mute| VolD| VolU|           |     |
     * +-----------------------------------------------------------------------------------------+
     *         |     |        |                                   |       |     |
     *         `----------------------------------------------------------------´
     */
    [ALT] = KEYMAP(
        LSFT(KC_TAB),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_F4,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_INS,  KC_TRNS,\
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_DEL,          \
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                    \
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  M(4),  M(5),  M(3), KC_TRNS,  KC_TRNS,                    \
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
        TG(MOU),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSLS,  KC_PAST,   KC_PMNS, \
           M(5),  KC_BTN3,  KC_MS_U,  KC_BTN2,  KC_WH_U,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_7,     KC_8,     KC_9,  KC_PPLS,          \
           M(4),  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_WH_D,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_4,     KC_5,     KC_6,  KC_PENT,                    \
           M(3),  KC_BTN4,  KC_BTN5,  KC_WH_L,  KC_WH_R,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_1,     KC_2,     KC_3,   KC_ESC,  KC_TRNS,                    \
                            KC_TRNS,  TG(MOU),                         KC_BTN1,                         KC_0,   KC_DOT
    ),

    /* SPACE Layer
     * ,-----------------------------------------------------------------------------------------.
     * |     |      |     |     |     |     |     |     |     |     |     |     |     |     |    |
     * |-----------------------------------------------------------------------------------------+
     * |        |     | MUp |     |     |     |     |     |     |     | Btn1|  Up | Btn2|        |
     * |-----------------------------------------------------------------------------------------+
     * |         | MLt | MDn | MRt |     |     |     |     |     |     | Left |Right|            |
     * |-----------------------------------------------------------------------------------------+
     * |           |     |     |     |     |     |     |     |     | Btn3| Down|           |     |
     * +-----------------------------------------------------------------------------------------+
     *         |     |        |                                   |       |     |
     *         `----------------------------------------------------------------´
     */
    [SPA] = KEYMAP(
        TG(NIX),  KC_F1, KC_F2, KC_F3,   KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,  KC_F10,   KC_F11,   KC_F12,    M(6),  M(7), \
        KC_TRNS,  KC_1,  KC_2,  KC_3,LSFT(KC_9),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,        \
        KC_TRNS,  KC_4,  KC_5,  KC_6,LSFT(KC_0),  KC_BTN1,  KC_HOME,  KC_LEFT,  KC_DOWN,    KC_UP, KC_RGHT,   KC_END,  KC_TRNS,                 \
        KC_TRNS,  KC_7,  KC_8,  KC_9,     KC_0,  KC_TRNS,  KC_TRNS,  KC_TRNS,LCTL(KC_0),LCTL(KC_MINS),LCTL(KC_EQL),KC_TRNS,  KC_TRNS,          \
                  KC_TRNS,  KC_TRNS,                      KC_TRNS,            KC_TRNS,KC_TRNS
    )
};

const uint16_t PROGMEM fn_actions[] = {

};

typedef struct {
  bool alt;
  bool finished_once;
} td_alm_state_t;

void _td_alm_finished (qk_tap_dance_state_t *state, void *user_data) {
  td_alm_state_t *s = (td_alm_state_t *)user_data;

  if (s->finished_once)
    return;

  s->finished_once = true;
  if (state->pressed) {
    s->alt = true;
    register_code(KC_LALT);
  } else {
    s->alt = false;
    unregister_code(KC_LALT);
    layer_on(MOU);
  }
}

void _td_alm_reset (qk_tap_dance_state_t *state, void *user_data) {
  td_alm_state_t *s = (td_alm_state_t *)user_data;

  if (s->alt) {
    unregister_code(KC_LALT);
  }

  s->finished_once = false;

  if(state->count == 1) {
    layer_on(MOU);
    set_oneshot_layer(MOU, ONESHOT_START);
    clear_oneshot_layer_state(ONESHOT_PRESSED);
  } else if(state->count == 2) {
    layer_on(MOU);
  }
} 

void _td_space_click (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code(KC_BTN1);
    unregister_code(KC_BTN1);
  } else {
    layer_off(MOU);
    register_code(KC_SPC);
    unregister_code(KC_SPC);
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [CTL_BSPC] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, LCTL(KC_BSPC)),
  [CTL_BSLS] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, LCTL(KC_BSLS)),
  [ALT_M] = {
    .fn = { NULL, _td_alm_finished, _td_alm_reset },
    .user_data = (void *)&((td_alm_state_t) { false, false })
  },
  [SPC_B] = ACTION_TAP_DANCE_FN(_td_space_click)
};


static uint16_t key_timer;
static uint16_t mouse_speed;
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if(record->event.pressed) {
            key_timer = timer_read();
            layer_on(ALT);
            register_code(KC_LALT);
          } else {
            unregister_code(KC_LALT);
            layer_off(ALT);
            if (timer_elapsed(key_timer) < 150) {
              register_code(KC_LBRC);
              unregister_code(KC_LBRC);
            }
          }
          break;
        case 1:
          if (record->event.pressed) {
            key_timer = timer_read();
            register_code(KC_LCTL);
          } else {
            if (timer_elapsed(key_timer) < 150) {
              register_code(KC_BSLS);
              unregister_code(KC_BSLS);
            }
            unregister_code(KC_LCTL);
             
          }
          break;
        case 2:
          if (record->event.pressed) {
            key_timer = timer_read();
            register_code(KC_LGUI);
          } else {
            unregister_code(KC_LGUI);
            if (timer_elapsed(key_timer) < 150) {
              return MACRO(D(LALT), T(BSPC), U(LALT), END);
            }
          }          
          break;
        case 3:
          if (record->event.pressed) {
            if(mouse_speed != 1) {
              mouse_speed = 1;
              register_code(KC_ACL0);
            } else {
              unregister_code(KC_ACL0);
              mouse_speed = 0;
            }
          }
        case 4:
          if(record->event.pressed) {
            if(mouse_speed != 2) {
              mouse_speed = 2;
              unregister_code(KC_ACL0);
              register_code(KC_ACL1);
            } else {
              unregister_code(KC_ACL1);
              mouse_speed = 0;
            }
          }
          break;
        case 5:
          if(record->event.pressed) {
            if(mouse_speed != 3) {
              mouse_speed = 3;
              unregister_code(KC_ACL0);
              unregister_code(KC_ACL1);
              register_code(KC_ACL2);
            } else {
              unregister_code(KC_ACL2);
              mouse_speed = 0;
            }
          }
          break;
        case 6:
          if(record->event.pressed) {
            layer_off(MAC);
          }
          break;
        case 7:
          if(record->event.pressed) {
            layer_on(MAC);
          }
          break;
        case 8:
          if(record->event.pressed) {
            key_timer = timer_read();
            layer_on(MOU);
          } else {
            if(key_timer > 150) {
              layer_off(MOU);
            }
          }
      }
    return MACRO_NONE;
};