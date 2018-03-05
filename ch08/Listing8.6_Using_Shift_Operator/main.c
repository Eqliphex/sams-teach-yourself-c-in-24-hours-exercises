/*
08L06:
Using shift operators
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y, z;

	x = 255;
	y = 5;

	printf("Given x = %4d, i.e., 0X%04X\n", x, x);
	printf("      y = %4d, i.e., 0X%04X\n", y, y);

	/*
		x >> y == x / 2
	*/
	z = x >> y;
	printf("x >> y yields: %6d, i.e, 0X%04X\n", z, z);

	/*
		x << y == x * 2
	*/
	z = x << y;
	printf("x << y yields: %6d, i.e, 0X%04X\n", z, z);

	getchar();
	return SUCCESS;
}