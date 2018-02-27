/*
06E02:
Given x = 3 and y = 6, what is the value of z after the statement
z = x * y == 18;
is executed?
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y, z;

	x = 3;
	y = 6;

	printf("Given x = %d, and y = %d\n", x, y);

	printf("z = x * y == 18 produces: %d\n", z = x * y == 18);
	printf("Expected: 1\n");
	printf("Reason: Because an arithmetic operator has higher precedence than a relational operator!\n");
	getchar();

	return SUCCESS;
}