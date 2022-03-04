#include "lamp.h"


void delay_us(uint16_t n)
{
  while(n) n--;
}

void RGB_LED_Write0(void)
{
  RGB_LED_HIGH;
  delay_us(6);//4
  RGB_LED_LOW;
  delay_us(21);//9
}

void RGB_LED_Write1(void)
{
	RGB_LED_HIGH;
	delay_us(25);
	RGB_LED_LOW;
	delay_us(3);
}

void RGB_LED_Write_Byte(uint8_t byte)
{
	uint8_t i;
	for (i = 0; i < 8; i++)
	{
		if (byte & 0x80)
		{
			RGB_LED_Write1();
		}
		else
		{
			RGB_LED_Write0();
		}
		byte <<= 1;
	}
}

void RGB_LED_Write_24Bits(uint8_t green,uint8_t red,uint8_t blue)//GRB......
{
	RGB_LED_Write_Byte(green);
	RGB_LED_Write_Byte(red);
	RGB_LED_Write_Byte(blue);
}

void Led_reset(void)
{
	 RGB_LED_LOW;
	 user_delay_us(3000);//延时,用于复位
}

