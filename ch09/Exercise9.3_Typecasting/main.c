/* 09E03: 
* Write a program to multiply two signed int variables with positive values, and
* display the result as a long int
*/
#define SUCCESS 0

#include <stdio.h>


int main()
{

	signed short int intValueOne = 30000;
	signed short int intValueTwo = 10000;
	unsigned long int longIntResult = intValueOne * intValueTwo;

	printf("Result of multiplication of %d and %d = %lu\n", intValueOne, intValueTwo, longIntResult);
	
	return SUCCESS;
}

/*
* Output: (My computer)
*
* → Result of multiplication of 30000 and 10000 = 300000000
*/

