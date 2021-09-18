/*
File Name:SERVO_program
Author:DohaOsama
Date:18/9/2021
Description:SERVO Driver
version 1.1
*/
#include"../../LIB/BIT_MATH.h"//library contains clear and set and get and toggle bit it will be used in this program 

#include"../../LIB/STD_TYPES.h"//library  contains all datatypes needed in this program

#include"SERVO_interface.h"//it is a header file that contain functions prototypes and some definitions and it will be very important to the user

#include"SERVO_private.h"//it is a header file that contains information very important in the program but it is not important for the user

#include"SERVO_config.h"//it is a header file that make the SERVO_program to be flexible for all users

void SERVO_VoidInitiat(void)
{

	CLEAR_BIT(SERVO_TCCR1A,TCCR1A_WGM10); 

	SET_BIT(SERVO_TCCR1A,TCCR1A_WGM11);

	SET_BIT(SERVO_TCCR1B,TCCR1B_WGM12); 

	SET_BIT(SERVO_TCCR1B,TCCR1B_WGM13);	
	
	CLEAR_BIT(SERVO_TCCR1A,TCCR1A_COM1A0); 
	
	SET_BIT(SERVO_TCCR1A,TCCR1A_COM1A1);
	
	CLEAR_BIT(SERVO_TCCR1B,TCCR1B_CS10); 

	SET_BIT(SERVO_TCCR1B,TCCR1B_CS11);

	CLEAR_BIT(SERVO_TCCR1B,TCCR1B_CS12); 

}
void SERVO_VoidSetCompareValue(u16 Copy_u16CompareValue)
{
	SERVO_OCR1A=Copy_u16CompareValue;
}
void SERVO_VoidTopValue(u16 Copy_u16TopValue)
{
	SERVO_ICR1=Copy_u16TopValue;
}
	
