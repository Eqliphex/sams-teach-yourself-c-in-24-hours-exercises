/*
07L05: Demonstrating nested loops
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int i, j;

	for (i = 1; i <= 3; i++)
	{
		printf("The start of iteration %d of the outer loop.\n", i);
		for (j = 1; j <= 4; j++)
			printf("	Iteration %d of the inner loop.\n", j);
		printf("The end of iteration %d of the outer loop.\n", i);
	}

	getchar();
	return SUCCESS;
}