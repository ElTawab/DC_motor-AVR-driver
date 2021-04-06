#include "STD_TYPES.h"
#include "bit.h"
#define F_CPU 8000000UL
#include"avr/io.h"
#include"avr/delay.h"

#include "DIO_Interface.h"
#include"LCD_Config.h"
#include"LCD_Interface.h"
void main (void)
{
	 DIO_VidSetPinDirection(PORTC,PIN0,OUTPUT);
	 DIO_VidSetPinDirection(PORTC,PIN1,OUTPUT);

while(1)
{
	DIO_VidSetPinValue(PORTC,PIN0,HIGH);
	 DIO_VidSetPinValue(PORTC,PIN1,LOW);
_delay_ms(2000);
DIO_VidSetPinValue(PORTC,PIN0,LOW);
DIO_VidSetPinValue(PORTC,PIN1,LOW);
_delay_ms(2000);
DIO_VidSetPinValue(PORTC,PIN0,LOW);
	 DIO_VidSetPinValue(PORTC,PIN1,HIGH);
	 _delay_ms(2000);
}
}

