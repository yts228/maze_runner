#ifndef BOARD_LED_H
#define BOARD_LED_H		

#include "hal_common_includes.h"

typedef enum {
	LED1,
	LED2,
	LED3
} led;

void board_led_init(void);
void board_led_on(led led_id);
void board_led_off(led led_id);
void board_led_toggle(led led_id);

#endif