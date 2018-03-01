/*
07L01: Using a while loop.

*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int c;

	c = ' ';
	printf("Enter a character:\n(enter x to exit)\n");
	
	while (c != 'x')
	{
		c = getc(stdin);
		putchar(c);
	}

	printf("\nOut of the while-loop. Bye!\n");

	return SUCCESS;
}