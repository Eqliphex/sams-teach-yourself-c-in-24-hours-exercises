/*
08L04:
Using the the logical NEGATION operator
*/


#include <stdio.h>

#define SUCCESS 0

int main()
{
	int num;

	num = 7;
	printf("Given num = 7\n");
	printf("!(num < 7) yields: %d\n", !(num < 7));
	printf("!(num > 7) yields: %d\n", !(num > 7));
	printf("!(num == 7) yields: %d\n", !(num == 7));
	getchar();
	return SUCCESS;
}