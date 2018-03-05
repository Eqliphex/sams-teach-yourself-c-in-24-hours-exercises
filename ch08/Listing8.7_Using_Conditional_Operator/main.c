/*
08L07:
Using conditional operator
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x;

	x = sizeof(int);

	printf("%s\n", (x == 2) ? "Int data type has 2 bytes." : "int doesn't have 2 bytes");

	printf("The maximum value of int is: %d\n", (x != 2) ? ~(1 << x * 8 - 1) : ~(1 << 15));

	getchar();
	return SUCCESS;
}