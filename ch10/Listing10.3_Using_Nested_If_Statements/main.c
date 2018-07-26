/* 10L03:
* Using nested if-statements to print numbers.
*/
#define SUCCESS 0
#define LOWER_LIMIT -5
#define UPPER_LIMIT 5

#include <stdio.h>


int main()
{
	for (int index = LOWER_LIMIT; index < UPPER_LIMIT; index++)
	{
		if (index > 0)
			if (index % 2 == 0)
				printf("%d is an even number.\n", index);
			else
				printf("%d is an odd number.\n", index);
		else if (index == 0)
			printf("The number is zero.\n");
		else
			printf("Negative number: %d", index);
	}

	return SUCCESS;
}

/*
* Output:
*
* → Negative number: -5
* → Negative number: -4
* → Negative number: -3
* → Negative number: -2
* → Negative number: -1
* → The number is zero.
* → 1 is an odd number.
* → 2 is an even number.
* → 3 is an odd number.
* → 4 is an even number.
* → 5 is an odd number.
*/