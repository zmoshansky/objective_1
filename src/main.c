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

	setup_io(GPIOD, GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15, GPIO_Mode_AF);
}

/*
 * Dummy function to avoid compiler error
 */