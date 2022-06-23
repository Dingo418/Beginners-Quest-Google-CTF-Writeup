#include <stdbool.h>

#include "hardware/gpio.h"
#include "hardware/structs/sio.h"//These are libaries for the Raspberr Pi Pico
#include "pico/stdlib.h"         //We do not need these

int main(void)
{
	for (int i = 0; i < 8; i++) { // Initialise a 8 bit binary number from gpio pin 0-7
		gpio_init(i); // Initialise a GPIO Pin i
		gpio_set_dir(i, GPIO_OUT); //Set's the GPIO pin as OUPUT
	}
	
	gpio_put_all(0); // Sets all output pins as 0

	for (;;) { // for (;;) means it goes forever
		gpio_set_mask(67); //First off, it converts 67 to it's binary equvilent of "1000011"
		gpio_clr_mask(0);
		sleep_us(100);	
		gpio_set_mask(20);
		gpio_clr_mask(3);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(16);
		sleep_us(100);
		gpio_set_mask(57);
		gpio_clr_mask(4);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(25);
		sleep_us(100);
		gpio_set_mask(5);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(18);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(64);
		gpio_clr_mask(17);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(6);
		sleep_us(100);
		gpio_set_mask(18);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(4);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(64);
		gpio_clr_mask(16);
		sleep_us(100);
		gpio_set_mask(16);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(4);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(3);
		sleep_us(100);
		gpio_set_mask(9);
		gpio_clr_mask(0);
		sleep_us(100);equvilent to while(true)
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(8);
		sleep_us(100);
		gpio_set_mask(8);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(65);
		gpio_clr_mask(24);
		sleep_us(100);
		gpio_set_mask(22);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(5);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(65);
		gpio_clr_mask(16);
		sleep_us(100);
		gpio_set_mask(22);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(6);
		sleep_us(100);
		gpio_set_mask(4);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(66);
		gpio_clr_mask(21);
		sleep_us(100);
		gpio_set_mask(1);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(0);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(24);
		gpio_clr_mask(65);
		sleep_us(100);
		gpio_set_mask(67);
		gpio_clr_mask(24);
		sleep_us(100);
		gpio_set_mask(24);
		gpio_clr_mask(67);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(8);
		sleep_us(100);
		gpio_set_mask(65);
		gpio_clr_mask(18);
		sleep_us(100);
		gpio_set_mask(16);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(0);
		sleep_us(100);
		gpio_set_mask(68);
		gpio_clr_mask(19);
		sleep_us(100);
		gpio_set_mask(19);
		gpio_clr_mask(64);
		sleep_us(100);
		gpio_set_mask(72);
		gpio_clr_mask(2);
		sleep_us(100);
		gpio_set_mask(2);
		gpio_clr_mask(117);
		sleep_us(100);
		gpio_put_all(0);
		sleep_ms(500);
	}

	return 0;
}
