/*
06L01:
Using arithmetic assignment operators
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y, z;

	x = 1;
	y = 3;
	z = 10;

	printf("Given x = %d, y = %d, and z = %d,\n", x, y, z);
	
	/* Normal addition assignment*/
	x = x + y;
	printf("x = x + y assigns %d to x\n", x);

	/* Shorthand addition */
	x = 1; /* reset */
	x += y; /* shorthand for x = x + y*/
	printf("x += y assigns %d to x\n", x);

	x = 1; /* reset */
	z = z * x + y;
	printf("z = z * x + y assigns %d to z\n", z);

	z = 10; /* reset */
	z = z * (x + y);
	printf("z = z * (x + y) assigns %d to z (Because of precedence)\n", z);

	/* Shorthand for the one above*/
	z = 10; /* reset */
	z *= x + y;
	printf("z *= x + y assigns %d to z (Is equivalent to the one above)\n", z);



	return SUCCESS;
}