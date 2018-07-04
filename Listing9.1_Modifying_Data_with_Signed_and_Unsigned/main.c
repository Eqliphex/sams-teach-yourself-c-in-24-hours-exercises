/* 09L01: Using signed and unsigned modifiers */
#include<stdio.h>

#define SUCCESS 0

int main()
{
	
	signed char ch;
	signed short x;
	unsigned short y;

	signed short negativeNumbers = -12345;

	ch = 0xFF;
	x = 0xFFFF;
	y = 0xFFFFu; // 
	printf("The decimal of signed 0xFF is %d.\n", ch);
	printf("The decimal of signed 0xFFFF is %d.\n", x);
	printf("The decimal of unsigned 0xFFFFu is %u.\n", y);
	printf("The hex of decimal 12345 is 0x%X.\n", (short)12345);
	printf("The hex of decimal -12345 is 0x%X.\n", negativeNumbers);

	return SUCCESS;
}
