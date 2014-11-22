#include "stm32f4xx_conf.h"
#include "b_io.h"
#include "bool.h"
#include "b_output.h"
// Forward Declarations
void init();

int main(void) {
	init();
	//setup LEDs

	return 0;
}

void init() {


//INITIALIZE LED TO BLINK WITH PWM
    SystemInit();
    TM_TIMER_Init();
    TM_PWM_Init();

}

/*
 * Dummy function to avoid compiler error
 */