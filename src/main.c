#include "stm32f4xx_conf.h"
#include "b_io.h"
#include "bool.h"
// Forward Declarations
void init();

int main(void) {
	init();
	//setup LEDs

	return 0;
}

void init() {
	setup_io(GPIOD, GPIO_Pin_12 | GPIO_Pin_14, GPIO_Mode_OUT);
}

/*
 * Dummy function to avoid compiler error
 */
void _init() {

}
