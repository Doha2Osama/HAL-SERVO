#ifndef SERVO_PRIVATE

#define SERVO_PRIVATE

#define SERVO_TCCR1A (*(volatile u8*)(0x4F))

#define TCCR1A_WGM10 0

#define TCCR1A_WGM11 1

#define TCCR1A_FOC1B 2

#define TCCR1A_FOC1A 3

#define TCCR1A_COM1B0 4

#define TCCR1A_COM1B1 5

#define TCCR1A_COM1A0 6

#define TCCR1A_COM1A1 7

#define SERVO_TCCR1B (*(volatile u8*)(0x4E))

#define TCCR1B_CS10 0

#define TCCR1B_CS11 1

#define TCCR1B_CS12 2

#define TCCR1B_WGM12 3

#define TCCR1B_WGM13 4

#define TCCR1B_ICES1 6

#define TCCR1B_ICNC1 7

#define SERVO_TCNT1L (*(volatile u8*)(0x4C))

#define SERVO_TCNT1H (*(volatile u8*)(0x4D))

#define SERVO_TCNT1 (*(volatile u16*)(0x4C))

#define SERVO_OCR1AL (*(volatile u8*)(0x4A))

#define SERVO_OCR1AH (*(volatile u8*)(0x4B))

#define SERVO_OCR1A (*(volatile u16*)(0x4A))

#define SERVO_ICR1L (*(volatile u8*)(0x46))

#define SERV0_ICR1H (*(volatile u8*)(0x47))

#define SERVO_ICR1 (*(volatile u16*)(0x46))

#endif