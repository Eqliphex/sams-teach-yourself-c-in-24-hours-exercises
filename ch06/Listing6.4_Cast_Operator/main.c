/*
06L04: Using the cast operator
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y;

	x = 7;
	y = 5;

	printf("Given x = %d, and y =%d\n", x, y);
	printf("x / y produces: %d\n", x / y);
	printf("(float) x / y produces: %f\n", (float)x / y);

	getchar();

	return SUCCESS;
}