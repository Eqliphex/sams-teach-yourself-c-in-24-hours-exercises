/*05E01: Write a program to put characters "B", "y" and "e" together on screen*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	putc('B', stdout);
	putc('y', stdout);
	putc('e', stdout);
	
	putc('\n', stdout);

	putchar('B');
	putchar('y');
	putchar('e');

	putchar('\n');

	printf("Bye\n");

	return SUCCESS;
}