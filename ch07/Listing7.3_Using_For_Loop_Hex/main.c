/*
07L03: Using a for-loop for converting numbers 0 to 15 into hex.
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int i;

	printf("Hex(uppercase)	Hex(lowercase)	Decimal\n");
	for (i = 0; i < 16; i++)
	{
		printf("%X		%x		%d\n", i, i, i);
	}
	getchar();
	return SUCCESS;
}