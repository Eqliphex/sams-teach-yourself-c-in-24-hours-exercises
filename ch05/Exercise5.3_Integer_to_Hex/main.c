/*
	05E03:
	Given the integers, 15, 150 and 1500, write a program the prints the
	integers on the screen in the hex format.
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int num1 = 15;
	int num2 = 150;
	int num3 = 1500;

	printf("num1 as integer: %i, converted to hex: %x\n", num1, num1);
	printf("num2 as integer: %i, converted to hex: %x\n", num2, num2);
	printf("num3 as integer: %i, converted to hex: %x\n", num3, num3);

	return SUCCESS;
}