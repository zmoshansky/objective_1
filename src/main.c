#include "stm32f4xx_conf.h"
#include "b_io.h"
#include "b_output.h"
// Forward Declarations

void _init(){
}

int main(void) {
	//INITIALIZE LED TO BLINK WITH PWM
    SystemInit();
    TM_TIMER_Init();
    TM_PWM_Init();
    TM_LEDS_Init();

	return 0;
}

