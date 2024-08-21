#include "kbdef.h"
#include "layout.h"
#include "user_layout.h"
#include "report.h"
#include <stdint.h>

// clang-format off

#define LAYOUT_96( \
                   K00_0, K01_0, K02_0, K03_0, K04_0, K05_0, K06_0, K07_0, K08_0, K09_0, K10_0, K11_0, K12_0, K13_0, K14_0, K15_0, K16_0, K17_0, K18_0, \
                   K00_1, K01_1, K02_1, K03_1, K04_1, K05_1, K06_1, K07_1, K08_1, K09_1, K10_1, K11_1, K12_1, K13_1,        K15_1, K16_1, K17_1, K18_1, \
                   K00_2, K01_2, K02_2, K03_2, K04_2, K05_2, K06_2, K07_2, K08_2, K09_2, K10_2, K11_2, K12_2, K13_2,        K15_2, K16_2, K17_2, K18_2, \
                   K00_3, K01_3, K02_3, K03_3, K04_3, K05_3, K06_3, K07_3, K08_3, K09_3, K10_3, K11_3,        K13_3,        K15_3, K16_3, K17_3       , \
                   K00_4, K01_4, K02_4, K03_4, K04_4, K05_4, K06_4, K07_4, K08_4, K09_4, K10_4,        K12_4, K13_4, K14_4, K15_4, K16_4, K17_4, K18_4, \
                   K00_5, K01_5, K02_5,               K05_5,               K08_5, K09_5, K10_5,               K13_5, K14_5, K15_5, K16_5, K17_5         \
                 ) { \
    { K00_0, K01_0, K02_0, K03_0, K04_0, K05_0, K06_0, K07_0, K08_0, K09_0, K10_0, K11_0, K12_0, K13_0, K14_0, K15_0, K16_0, K17_0, K18_0 }, \
    { K00_1, K01_1, K02_1, K03_1, K04_1, K05_1, K06_1, K07_1, K08_1, K09_1, K10_1, K11_1, K12_1, K13_1, KC_NO, K15_1, K16_1, K17_1, K18_1 }, \
    { K00_2, K01_2, K02_2, K03_2, K04_2, K05_2, K06_2, K07_2, K08_2, K09_2, K10_2, K11_2, K12_2, K13_2, KC_NO, K15_2, K16_2, K17_2, K18_2 }, \
    { K00_3, K01_3, K02_3, K03_3, K04_3, K05_3, K06_3, K07_3, K08_3, K09_3, K10_3, K11_3, KC_NO, K13_3, KC_NO, K15_3, K16_3, K17_3, KC_NO }, \
    { K00_4, K01_4, K02_4, K03_4, K04_4, K05_4, K06_4, K07_4, K08_4, K09_4, K10_4, KC_NO, K12_4, K13_4, K14_4, K15_4, K16_4, K17_4, K18_4 }, \
    { K00_5, K01_5, K02_5, KC_NO, KC_NO, K05_5, KC_NO, KC_NO, K08_5, K09_5, K10_5, KC_NO, KC_NO, K13_5, K14_5, K15_5, K16_5, K17_5, KC_NO }  \
}

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: (Base Layer) Default Layer
     * ,------------------------------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins| Del| |Hom|End|PgU|PgD|
     * |------------------------------------------------------------------------------|
     * | ~ |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  Backsp| |Num|  /|  *|  -|
     * |------------------------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     \| | N7| N8| N9|   |
     * |--------------------------------------------------------------------------| + |
     * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return| | N4| N5| N6|   |
     * |------------------------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  Shift|| Up|| N1| N2| N3|   |
     * |--------------------------------------------------------------------------|Ret| 
     * |Ctrl|Alt |Gui |          Space          |Alt|Fn |Ctl||Lft|Dwn|Rht|| N0|  .|   |
     * `------------------------------------------------------------------------------'
     */
    [_BL] = LAYOUT_96(

        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,   KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,  RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT,  KC_PENT
    )
};
