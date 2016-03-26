#include "%KEYBOARD%.h"

__attribute__ ((weak))
void matrix_init_user(void) {
	// leave this function blank - it can be defined in a keymap file
};

__attribute__ ((weak))
void matrix_scan_user(void) {
	// leave this function blank - it can be defined in a keymap file
}

__attribute__ ((weak))
void led_set_user(uint8_t usb_led) {
	// leave this function blank - it can be defined in a keymap file
}

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
	
	matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)

	matrix_scan_user();
}

void led_set_kb(uint8_t usb_led) {
	// put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

	led_set_user(usb_led);
}