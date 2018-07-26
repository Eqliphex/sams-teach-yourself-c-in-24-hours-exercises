/*03E01:
* Given two statements, x = 3; and y = 5 + x;, how can you build a statement
* block with the two statements?
*/
#define SUCCESS 0

#include <stdio.h>

int main()
{
	const int x = 3;
	const int y = 5 + x;
	printf("The value of y is: %d", y);

	return SUCCESS;
}

/*
* Output:
*
* → The value of y is: 8
*/