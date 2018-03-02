/*
07L04: Multiple expressions in a for-statement
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int i, j;
	
	for (i = 0, j = 8; i <= 8; i++, j--)
	{
		printf("%d  +  %d  =  %d\n", i, j, i + j);
	}

	printf("\nAnother example:\n\n");

	for (i = 0, j = 1; i <= 8; i++, j++)
	{
		printf("%d  -  %d  =  %d\n", j, i, j - i);
	}
	getchar();
	return SUCCESS;
}