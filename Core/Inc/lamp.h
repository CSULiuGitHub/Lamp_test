#ifndef _LAMP_H
#define _LAMP_H

#include "main.h"
#include "tim.h"
#include "gpio.h"

#define     RGB_LED_HIGH    (HAL_GPIO_WritePin(Lamp_GPIO_Port, Lamp_Pin, GPIO_PIN_SET))
#define     RGB_LED_LOW     (HAL_GPIO_WritePin(Lamp_GPIO_Port, Lamp_Pin, GPIO_PIN_RESET))



void RGB_LED_Write0(void);
void RGB_LED_Write1(void);
void RGB_LED_Write_Byte(uint8_t byte);
void RGB_LED_Write_24Bits(uint8_t green,uint8_t red,uint8_t blue);
void Led_reset(void);

#endif
