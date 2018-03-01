/*
07L01: Using a do-while loop.

*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int i;

	i = 65;
	do {
		printf("The numeric value of %c is %d.\n", i, i);
		i++;
	} while (i < 72);

	getchar();
	return SUCCESS;
}