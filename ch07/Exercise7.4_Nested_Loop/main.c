/*
07E04:
Rewrite the program in Listing 7.6. This time, use a while loop as the outer loop,
and a do-while loop as the inner loop.
*/


#include <stdio.h>

#define SUCCESS 0

int main()
{
	int i = 1;
	int	j = 1;

	while (i <= 3) {
		printf("The start of iteration %d of the outer loop.\n", i);
		do {
			printf("	Iteration %d of the inner loop.\n", j);
			j++;
		} while (j < 4);
		printf("The end of iteration %d of the outer loop.\n", i);
		i++;
	}
	

	getchar();
	return SUCCESS;
}