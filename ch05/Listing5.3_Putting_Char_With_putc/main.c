/*05L03: Outputting a character with putc()*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int ch;

	ch = 65; /*Numeric value of char "A"*/

	printf("The character with the numeric value of 65 is: ");
	putc(ch, stdout);

	return SUCCESS;
}