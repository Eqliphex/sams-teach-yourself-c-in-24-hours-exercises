/*
08E03:
Given x = 123 and y = 4, write a program that displays
the results of the expressions x << y and x >> y.
Remember: left-side is shifted right-side amount of times
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	unsigned short e1 = 0xFFFF ^ 0x8888;
	unsigned short e2 = 0xABCD & 0x4567;
	unsigned short e3 = 0xDCBA | 0x1234;

	printf("Given the two hexadecimal numbers:\n0xFFFF and 0x8888\n");
	printf("");
	printf("X0%04X", e1);

	getchar();
	return SUCCESS;
}