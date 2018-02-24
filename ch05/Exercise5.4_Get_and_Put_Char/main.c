/*
05E04:
Write a program the uses getchar() and putchar() to read in a character entered
by the user and write the character to the screen
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int ch;
	ch = getchar();
	putchar(ch);

	return SUCCESS;
}