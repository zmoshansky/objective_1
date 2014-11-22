#ifndef B_IO_H
#define B_IO_H

#include "stm32f4xx.h"
#include "bool.h"


// See stm32f4xx_gpio.h for functions to read/write/etc
bool setup_io(GPIO_TypeDef* port, uint16_t pin, uint32_t direction);

#endif /* B_IO_H */
