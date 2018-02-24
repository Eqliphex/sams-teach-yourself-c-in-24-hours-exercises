/*05L07: Aligning output*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int num1, num2, num3, num4, num5;

	num1 = 1;
	num2 = 12;
	num3 = 123;
	num4 = 1234;
	num5 = 12345;

	/*
		%8d - alligns to the right of the field.
		%-8d - alligns to the left of the field.
	*/
	printf("%8d    %-8d\n", num1, num1);
	printf("%8d    %-8d\n", num2, num2);
	printf("%8d    %-8d\n", num3, num3);
	printf("%8d    %-8d\n", num4, num4);
	printf("%8d    %-8d\n", num5, num5);

	return SUCCESS;
}