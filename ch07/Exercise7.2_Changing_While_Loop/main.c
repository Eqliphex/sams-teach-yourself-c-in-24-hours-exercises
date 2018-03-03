/*
07E02: Rewrite the program in Listing 7.1. This time, you want the while statement to
keep looping until the user enters the character K.
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int c;

	c = ' ';
	printf("Enter a character:\n(enter x to exit)\n");

	while (c != 'K')
	{
		c = getc(stdin);
		putchar(c);
	}

	printf("\nOut of the while-loop. Bye!\n");

	getchar();
	return SUCCESS;
}