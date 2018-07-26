/* 10L02:
* Using if-else-statements to print even and odd numbers.
*/
#define SUCCESS 0
#define LOWER_LIMIT 0
#define UPPER_LIMIT 10

#include <stdio.h>


int main()
{
	printf("Even Number   Odd Number\n");

	for(int index = LOWER_LIMIT; index < UPPER_LIMIT; index++)
	{
		if (index % 2 == 0)
			printf("%d", index);
		else
			printf("%14d\n", index);
	}

	return SUCCESS;
}

/*
* Output:
* 
* → Even Number   Odd Number
* → 0			  1
* → 2             3
* → 4             5
* → 6             7
* → 8             9
*/