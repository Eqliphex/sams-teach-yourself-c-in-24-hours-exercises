/* 10L01:
* Using the if-statement to print integers divisible by 2 and 3.
*/
#define SUCCESS 0
#define LOWER_LIMIT 0
#define UPPER_LIMIT 100

#include <stdio.h>


int main()
{
	printf("Integers that can be divided by both 2 and 3\n");
	printf("(Within the range of 0 to 100):\n");
	for(int index = LOWER_LIMIT; index <= UPPER_LIMIT; index++)
	{
		if((index % 2 == 0) && (index % 3 == 0))
		{
			printf("    %d\n", index);
		}
	}

	return SUCCESS;
}

/*
* Output:
*
* → Integers that can be divided by both 2 and 3
* → (within the range of 0 to 100):
* → 06
* → 12
* → 18
* → 24
* → 30
* → 36
* → 42
* → 48
* → 54
* → 60
* → 66
* → 72
* → 78
* → 84
* → 90
* → 96
*/

