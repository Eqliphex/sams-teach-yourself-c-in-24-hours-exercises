/*	
	This program converts provided integers to their equivalent char values.
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int first_integer = 72;
	int second_integer = 104;

	printf("%d's char value: %c\n", first_integer, first_integer);
	printf("%d's char value: %c", second_integer, second_integer);

	getchar();
	return SUCCESS;
}