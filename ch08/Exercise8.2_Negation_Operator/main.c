/*
08E02:
Taking the values of x and y assigned in Exercise 1, write a program that prints
out the values of !x and !y by using both the %d and %u formats in the printf()
function.
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	unsigned short x = 0, y = 0; 
	x = 0xEFFF;
	y = 0x1000;

	printf("Given the values: x = 0X%04X, binary: 1110 1111 1111 1111\n	      and y = 0X%04X, binary: 0001 0000 0000 0000\n\n", x, y);
	printf("Using the %%d format:\n");
	printf("!x = %d and !y = %d\n", !x, !y);
	printf("Using the %%u format:\n");
	printf("!x = %u and !y = %u\n", !x, !y);

	getchar();
	return SUCCESS;
}