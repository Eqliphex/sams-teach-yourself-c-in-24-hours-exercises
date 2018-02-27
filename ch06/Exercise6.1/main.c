/*
06E01: 
Given x = 1 and y = 3, write a program to print out the results of these expressions: 
x += y, x += -y, x -= y, x -= -y, x *= y, and x *= -y
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y;

	x = 1;
	y = 3;

	printf("Given x = %d, and y = %d\n", x, y);

	printf("x += y produces: %d\n", x += y);
	printf("x += -y produces: %d\n", x += -y);
	printf("x -= y produces: %d\n", x -= y);
	printf("x -= -y produces: %d\n", x -= -y);
	printf("x *= y produces: %d\n", x *= y);
	printf("x *= -y produces: %d\n", x *= -y);

	getchar();

	return SUCCESS;
}