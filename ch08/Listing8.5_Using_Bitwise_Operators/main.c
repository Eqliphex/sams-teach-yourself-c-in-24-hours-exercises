/*
08L05:
Using bitwise operators
*/


#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y, z;

	x = 4321;
	y = 5678;

	printf("Given x = %u, i.e., 0X%04X\n", x, x);
	printf("      y = %u, i.e., 0X%04X\n", y, y);
	

	/*
	The & operator compares each bit of x to the corresponding bit in y. If both bits are 1, 1
	is placed at the same position of the bit in the result. If one or both of the bits is 0, 0 is
	placed in the result. 
	Example: 12 & 10 = 8 => 1100 & 1010 = 1000 => 8
	*/
	z = x & y;
	printf("x & y returns: %6u, i.e, 0X%04X\n", z, z);

	/*
	The | operator places 1 in the result if either operand is 1. For example, the expression
	01 | 11 yields 11. The | operator yields a 0 bit if — and only if — both operand bits
	are 0.
	*/
	z = x | y;
	printf("x | y returns: %6u, i.e, 0X%04X\n", z, z);

	/*
	The ^ operator places 1 in the result if exactly one operand, but not both, is 1. Therefore,
	the expression 01 ^ 11 yields 10.
	*/
	z = x ^ y;
	printf("x ^ y returns: %6u, i.e, 0X%04X\n", z, z);

	/*
	the ~ operator takes just one operand. This operator reverses each bit in the
	operand. For instance, ~01 gives 10
	*/

	printf("  ~x  returns: %6u, i.e, 0X%04X\n", ~x, ~x);

	getchar();
	return SUCCESS;
}