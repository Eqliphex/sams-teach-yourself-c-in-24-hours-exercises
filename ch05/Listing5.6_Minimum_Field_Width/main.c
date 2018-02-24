/*05L06: Specifying minimum field widths*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int num1, num2;

	num1 = 12;
	num2 = 12345;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%5d\n", num1);
	printf("%05d\n", num1); // Zeros pad the empty spaces
	printf("%2d\n", num2);

	return SUCCESS;
}