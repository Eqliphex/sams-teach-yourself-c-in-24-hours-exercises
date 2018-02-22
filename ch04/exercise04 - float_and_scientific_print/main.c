/*
	Program to print out the number 123.456 in floating point and scientific notation.
*/
#include <stdio.h>

#define SUCCESS 0

int main()
{
	double dbl_num = 123.456;

	printf("floating notation: %f\n", dbl_num);
	printf("scientific notation: %e", dbl_num);

	getchar();
	return SUCCESS;
}