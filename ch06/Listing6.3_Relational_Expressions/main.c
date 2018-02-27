/*
06L03: Using relational operators
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y;
	double z;

	x = 7;
	y = 25;
	z = 24.46;

	printf("Given x = %d, y = %d, and z = %.2f,\n", x, y, z);
	printf("x >= y produces: %d\n", x >= y);
	printf("x == y produces: %d\n", x == y);
	printf("x < z produces: %d\n", x < z);
	printf("y > y produces: %d\n", y > z);
	printf("x != y - 1 produces: %d\n", x != y -18);
	printf("x + y != z produces: %d\n", x + y != z);
	getchar();

	return SUCCESS;
}