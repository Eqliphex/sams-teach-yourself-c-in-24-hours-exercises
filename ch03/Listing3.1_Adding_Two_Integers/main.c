/* 03L02 & 03L03:
* Function to add two integers and return the result.
*/

#define SUCCESS 0

#include <stdio.h>
#include "main.h"


int summation_two_integers(const int first_factor, const int second_factor)
{
	return first_factor + second_factor;
}


int main()
{
	int const first_integer = 2;
	int const second_integer = 3;
	printf("The sum of, %d and %d, is: %d\n", first_integer, second_integer, summation_two_integers(first_integer, second_integer));

	return SUCCESS;
}

/*
* Output:
*
* → The sum of, 2 and 3, is: 5
*/