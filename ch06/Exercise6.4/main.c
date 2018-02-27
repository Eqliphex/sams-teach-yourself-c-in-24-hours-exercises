/*
06E04:
Rewrite the program you wrote in exercise 3. This time, include the following two
statements:
printf(“x = x++ produces: %d\n”, x = x++);
printf(“Now x contains: %d\n”, x);
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x;

	x = 1;

	printf("Given x = %d\n", x);

	printf("x++ produces: %d\n", x++);
	printf("Now x contains : %d\n", x);
	printf("Reason: post-increment, meaning the value first is incremented after the line has run\n\n");

	x = 1; /*reset*/

	printf("x = x++ produces: %d\n", x = x++);
	printf("Now x contains : %d\n", x);
	printf("Reason: This is still post-incrementing, meaning the value first is incremented after the line has run but also assigning the variable x twice.\n");

	getchar();

	return SUCCESS;
}