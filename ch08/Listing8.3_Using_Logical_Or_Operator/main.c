/*
08L02:
Using the the logical OR operator
*/


#include <stdio.h>

#define SUCCESS 0

int main()
{
	int num;

	printf("Enter a single digit that can be divided\nby both 2 and 3:\n");

	for (num = 1; (num % 2 != 0) || (num % 3 != 0);)
		num = getchar() - '0';
	printf("You got such a number: %d\n", num);

	getchar();
	return SUCCESS;
}