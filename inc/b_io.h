#ifndef B_IO_H 
#define B_IO_H

#include "stm32f4xx.h"
#include "bool.h"


bool setup_io(GPIO_TypeDef* port, uint32_t pin, uint32_t direction);

// TODO Figure out how to make invisible to other code... static?
uint32_t peripheral_port_from_port(GPIO_TypeDef* port);

#endif /* B_IO_H */
