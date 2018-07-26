/* 10L04:
* Using switch-statements to print days.
*/
#define SUCCESS 0

#include <stdio.h>


int main()
{
	printf("Please enter a single digit for a day\n");
	printf("(within the range of 1 to 3):\n");

	const int input_day = getchar();

	switch (input_day)
	{
	case '1':
		printf("Day 1\n");
	case '2':
		printf("Day 2\n");
	case '3':
		printf("Day 3\n");
	default:
		printf("That is not a valid input!\n");
	}

	return SUCCESS;
}

/*
* Output:
*
* → Please enter a single digit for a day
* → (within the range of 1 to 3):
* ←	3
* → Day 3
*/