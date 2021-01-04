#include QMK_KEYBOARD_H

#define XXXXXXX KC_NO
#define _______ KC_TRNS

#define BASE 0
#define NUMPAD 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT(
		KC_ESC,		KC_1,			KC_2,			KC_3,			KC_4,			KC_5,			KC_6,			XXXXXXX,	KC_7,			KC_8,			KC_9,			KC_0,			KC_MINS,	KC_EQL,		KC_DEL,
		KC_TAB,		KC_Q,			KC_W,			KC_E,			KC_R,			KC_T,			KC_LSPO,						KC_RSPC,	KC_Y,			KC_U,			KC_I,			KC_O,			KC_P,			KC_BSPC,
		KC_LSFT,	KC_A,			KC_S,			KC_D,			KC_F,			KC_G,			KC_LBRC,						KC_RBRC,	KC_H,			KC_J,			KC_K,			KC_L,			KC_SCLN,	KC_RSFT,
		KC_GRV,		KC_Z,			KC_X,			KC_C,			KC_V,			KC_B,			KC_QUOT,	XXXXXXX,	KC_BSLS,	KC_N,			KC_M,			KC_COMM,	KC_DOT,		KC_SLSH,	XXXXXXX,
		MO(1),		KC_LCTL,	KC_LALT,	KC_LGUI,	KC_SPC,												KC_ENT,		KC_SPC,							KC_LEFT,	KC_UP,		KC_DOWN,	XXXXXXX,	KC_RGHT
	),
	[NUMPAD] = LAYOUT(
		_______,	KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		RESET,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		_______,
		_______,	_______,	_______,	_______,	_______,	_______,	KC_MSTP,						KC_MPLY,	_______,	KC_P7,		KC_P8,		KC_P9,		_______,	_______,
		_______,	_______,	_______,	_______,	_______,	_______,	KC_MRWD,						KC_MFFD,	_______,	KC_P4,		KC_P5,		KC_P6,		_______,	_______,
		_______,	_______,	_______,	_______,	_______,	_______,	KC_VOLD,	KC_MUTE,	KC_VOLU,	_______,	KC_P1,		KC_P2,		KC_P3,		_______,	_______,
		_______,	_______,	_______,	_______,	_______,											_______,	KC_P0,							_______,  _______,  _______,	_______,	_______
	)
};
