/*05L01: Reading input by calling getc(), if more is typed the first is taken.*/
#include <stdio.h>

#define SUCCESS 0

int main()
{
	int ch;

	printf("Please type in one character:\n");
	
	ch = getc(stdin);
	printf("The character you just entered is: %c\n", ch);
	
	return SUCCESS;
}