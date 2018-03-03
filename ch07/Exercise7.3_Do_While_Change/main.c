/*
07E03: 
Rewrite the program shown in Listing 7.2 by replacing the do-while loop with a
for loop.
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int i;

	i = 65;
	while (i <= 72)
	{
		printf("The numeric value of %c is %d.\n", i, i);
		i++;
	}

	getchar();
	return SUCCESS;
}