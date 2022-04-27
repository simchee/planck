/*
	This layout is specifically made for linux system with right alt activated as compose
	It depends on tricks to make german & turkish letters possible in ANSI

 */

// qmk flash -kb bm40hsrgb -km sco
#include QMK_KEYBOARD_H

// non-DE_ keycodes
/* #define DE_RST RESET */
/* #define DE_TOG RGB_TOG */
/* #define DE_MOD RGB_MOD */
/* #define DE_HUI RGB_HUI */
/* #define DE_SAI RGB_SAI */
/* #define DE_VAI RGB_VAI */

//define layers
enum layers {_QWERTZ, _LOWER, _RAISE, _FN1, _FN2};
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define FN1 MO(_FN1)
#define FN2 MO(_FN2)

#define TR_GBRV RALT(KC_LPRN)
#define TR_SCED RALT(KC_COMM)
#define TR_CCED RALT(KC_COMM)
#define ES_NINO RALT(S(KC_TILD))
#define	DE_MOD RALT(S(KC_QUOT))
#define DE_MU RALT(KC_SLSH)

#define DE_AT S(KC_2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTZ
 * .-----------------------------------------------------------------------------------------------.
 * |  Esc  |   Q   |   W   |   E   |   R   |   T   |   Z   |   U   |   I   |   O   |   P   | Bkspsc|
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Tab  |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   '   | Enter |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * | LShift|   Y   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |  AUp  |   /   |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  FN1  |  GUI  | LCtrl | LAlt  | Lower |     Space     | Raise |  Fn2  | ALeft | ADown | ARight|
 * °-----------------------------------------------------------------------------------------------°
*/

/* LSHIFT
 * .-----------------------------------------------------------------------------------------------.
 * |  Esc  |   Q   |   W   |   E   |   R   |   T   |   Z   |   U   |   I   |   O   |   P   | Bkspc |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Tab  |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   "   |   ?   |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * | LShift|   Y   |   X   |   C   |   V   |   B   |   N   |   M   |   ;   |   :   |  AUp  | Enter |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Fn1  |  GUI  | LCtrl | LAlt  | Lower |     Space     | Raise |  Fn2  | ALeft | ADown | ARight|
 * °-----------------------------------------------------------------------------------------------°
*/

[_QWERTZ] = LAYOUT_planck_mit(
	KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Z,		KC_U,		KC_I,			KC_O,			KC_P,				KC_BSPC,
	FN1,		KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,			KC_L,			KC_SCLN,			KC_SLSH,
	KC_LSFT,	KC_Y,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,		KC_DOT,			KC_UP,				KC_ENT,
	KC_GESC,	KC_LGUI,	KC_LCTL,	KC_LALT,	LOWER,				KC_SPC,			RAISE,		FN2,			KC_LEFT,		KC_DOWN,			KC_RIGHT
							  ),

/* FN2 = DE & TR Chars
 * .-----------------------------------------------------------------------------------------------.
 * |  Ins  |       |       |       |       |       |       |   Ü   |       |   Ö   |       | Bkspc |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Fn1  |   Ä   |   Ş   |   ß   |       |   Ğ   |       |       |       |       |       | Caps  |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * | Shift |       |       |   Ç   |       |       |       |       |       |       |  AUp  |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Esc  |  GUI  | LCtrl | LAlt  | Lower |     Space     | Raise |  Fn2  | ALeft | ADown | ARight|
 * °-----------------------------------------------------------------------------------------------°
*/

[_FN2] = LAYOUT_planck_mit(
	KC_TAB,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		DE_MOD,		KC_TRNS,	DE_MOD,	KC_TRNS,		KC_DEL,
	FN1,		DE_MOD,		TR_SCED,	RALT(KC_S),	KC_TRNS,	TR_GBRV,		KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	S(KC_RSFT),
	KC_LSFT,	KC_TRNS,	KC_TRNS,	TR_CCED,	KC_TRNS,	KC_TRNS ,		ES_NINO,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_UP,		KC_TRNS,
	KC_GESC,	KC_LGUI,	KC_LCTL,	KC_LALT,	LOWER,				KC_SPC,					RAISE,		FN2,		KC_LEFT,	KC_DOWN,	KC_RIGHT
							),

/* Lower = WASD Navi + Numpad
 * .-----------------------------------------------------------------------------------------------.
 * |  TAB  |  PUp  |  Up   | PDow  | Home  |  F5   |   ^   |  7(/) |  8(() |  9()) |  0(=) |BackSpc|
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Fn1  |  Left |  Down | Right |  End  |       |   #   |  4($) |  5(%) |  6(&) |       |   /   |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * | Shift |  Mute |  VUp  |  VDo  |  PP   |  Prev | Next  |  1(!) |  2(") |  3(§) |   +   | Enter |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  ESC  |  RGB  | LCtrl | LAlt  | Lower |     Space     |   ,   |  0(=) |   .   |  -(_) |C-S-Del|
 * °-----------------------------------------------------------------------------------------------°
 */

[_LOWER] = LAYOUT_planck_mit(
	KC_TAB,		KC_PGUP,	KC_UP,		KC_PGDN,	KC_HOME,	KC_F5,			KC_CIRC,		KC_7,		KC_8,		KC_9,		KC_EQL,		KC_BSPC,
	FN1,		KC_LEFT,	KC_DOWN,	KC_RIGHT,	KC_END,		RGB_TOG,		KC_NUHS,		KC_4,		KC_5,		KC_6,		KC_ASTR,	KC_SLSH,
	KC_LSFT,	KC_MUTE,	KC_VOLD,	KC_VOLU,	KC_MPLY,	KC_MPRV,		KC_MNXT,		KC_1,		KC_2,		KC_3,		KC_PLUS,	KC_ENTER,
	KC_GESC,	RGB_TOG,	KC_LCTL,	KC_LALT,	LOWER,				KC_SPC,					KC_COMM,	KC_0,		KC_DOT,		KC_MINS,	KC_TRNS
							),

/* Fn1 = F-Keys + HJKL Navi + Browsing
 * .-----------------------------------------------------------------------------------------------.
 * |  F12  |  F1   |  F2   |  F3   |  F4   |  F5   |  F6   |  F7   |  F8   |  F9   |  F10  |  Del  |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Fn1  |  F11  |       |       |   T   |       | Home  | PDown |  PUp  |  End  |       | Enter |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * | LShift|  Caps |   X   |   C   |   V   |       | ALeft | ADown |  AUp  | ARight|       | MRight|
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * | PrScr | C-Tab | M-Tab |  FN2  | Lower |     Space     | Raise |  Fn2  |       |       |  Ins  |
 * °-----------------------------------------------------------------------------------------------°
*/

[_FN1] = LAYOUT_planck_mit(
	KC_F12,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,			KC_F6,			KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_DEL,
	FN1,		KC_F11,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_HOME,		KC_PGDN,	KC_PGUP,	KC_END,		KC_TRNS,	KC_TRNS,
	KC_LSFT,	KC_CAPS,	KC_X,		KC_C,		KC_V,		KC_TRNS,		KC_LEFT,		KC_DOWN,	KC_UP,		KC_RIGHT,	KC_TRNS,	KC_APP,
	KC_PSCR,	KC_TRNS,	KC_TRNS,	KC_TRNS,	LOWER,			KC_SPC,						RAISE,		KC_TRNS,	KC_TRNS,	KC_PSCR,	KC_INS
						   ),

/* Raise = Top Numbers + Bottom chars
 * .-----------------------------------------------------------------------------------------------.
 * |   ^   |   !   |   @   |       |   $   |   %   |   &   |   *   |   (   |    )  |   ?   |   ~   |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Fn1  |       |       |       |   €   |       |       |       |  [({) |  ](}) |   '   |  /(|) |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * | Shift |   -   |       |       |       |       |       |       |   <   |   >   |  =(+) |   #   |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
 * |  Esc  |  GUI  | LCtrl | LAlt  | Lower |     Space     | Raise |  FN2  |       |       |       |
 * °-----------------------------------------------------------------------------------------------°
*/

[_RAISE] = LAYOUT_planck_mit(
	KC_CIRC,	KC_EXLM,	KC_AT,		KC_TRNS,	KC_DLR,		KC_PERC,		KC_AMPR,		KC_ASTR,	KC_LPRN,	KC_RPRN,	KC_QUES,	KC_TILD,
	FN1,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,	KC_LBRC,	KC_RBRC,	KC_QUOT,	KC_BSLS,
	KC_TRNS,	KC_MINS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,	KC_LABK,	KC_RABK,	KC_EQL,		KC_HASH,
	KC_TRNS,	KC_TRNS,	KC_TRNS,	FN2,		LOWER,			KC_SPC,						RAISE,		FN2,		KC_TRNS,	KC_TRNS,	KC_TRNS
						  )

};
