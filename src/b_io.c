/*
* Code to setup pin for input or output
* create header file b_io.h to contain function declarations
*/

/* port ex.)        GPIOD
*  pin ex.)         GPIO_Pin_12
*  direction ex.)   GPIO_Mode_OUT
*/
#include "b_io.h"
#include "stm32f4xx_conf.h"

// Forward declarations
static uint32_t peripheral_port_from_port(GPIO_TypeDef* port);

bool setup_io(GPIO_TypeDef* port, uint16_t pin, uint32_t direction) {
    GPIO_InitTypeDef  GPIO_InitStructure;
    
    uint32_t peripheral = peripheral_port_from_port(port);
    if (peripheral == 0) return false;
    
    // ---------- GPIO -------- //
    // GPIOx Periph clock enable
    RCC_AHB1PeriphClockCmd(peripheral, ENABLE);

    GPIO_InitStructure.GPIO_Pin = pin;
    GPIO_InitStructure.GPIO_Mode = direction;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
    GPIO_Init(port, &GPIO_InitStructure);
    return true;
}

uint32_t peripheral_port_from_port(GPIO_TypeDef* port) {
    if (port == GPIOA) return RCC_AHB1Periph_GPIOA;
    else if(port == GPIOB) return RCC_AHB1Periph_GPIOB;
    else if(port == GPIOC) return RCC_AHB1Periph_GPIOC;
    else if(port == GPIOD) return RCC_AHB1Periph_GPIOD;
    return 0;
}
