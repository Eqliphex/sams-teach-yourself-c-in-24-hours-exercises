/*
06E03:
Write a program that initializes the integer variable x with 1 and outputs results
with the following two statements:
printf(“x++ produces: %d\n”, x++);
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
	printf("Reason: post-increment, meaning the value first is incremented after the line has run\n");
	getchar();

	return SUCCESS;
}