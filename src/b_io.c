/*
* Code to setup pin for input or output
* create header file b_io.h to contain function declarations
*/

/* port ex.) 		GPIOD
*  pin ex.) 		GPIO_Pin_12
*  direction ex.)	GPIO_Mode_OUT
*/

int setup_io(uint32_t port, uint32_t pin, uint32_t direction) {
	GPIO_InitTypeDef  GPIO_InitStructure;
	// ---------- GPIO -------- //
	// GPIOD Periph clock enable
	RCC_AHB1PeriphClockCmd(peripheral_port_from_port(port), ENABLE);

	// Configure PD12, PD13, PD14 and PD15 in output pushpull mode
	GPIO_InitStructure.GPIO_Pin = pin;
	GPIO_InitStructure.GPIO_Mode = direction;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOD, &GPIO_InitStructure);
}

uint32_t peripheral_port_from_port(uint32_t port) {
	// TODO Fill in remaining cases with other ports A, B, C 
	switch(port) {
		case GPIOA:
			return RCC_AHB1Periph_GPIOA;
		case GPIOB:
			return RCC_AHB1Periph_GPIOB;
		case GPIOC:
			return RCC_AHB1Periph_GPIOC;
		case GPIOD:
			return RCC_AHB1Periph_GPIOD;
		default:
			return 0;
	}
}
