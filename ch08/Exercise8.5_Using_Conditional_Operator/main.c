/*
08E05:
Use the ?: operator and the for statement to write a program 
that keeps taking the characters entered by the user 
until the character q is accounted.
*/

#include <stdio.h>

#define SUCCESS 0

/*
Conditional statements form:

test condition ? if true : if false
ex:
x > 0 ? 'T' : 'F' | x is an integer above zero, returns true else false
*/

int main()
{

	int x;
	printf("Enter a character : \n(enter q to exit)\n");
	for (x = ' '; x != 'q' ? 1 : 0; ) { /*While 1 this runs.*/
		x = getc(stdin);
		putchar(x);
	}
	printf("\nOut of the for loop. Bye!\n");

	getchar();
	return SUCCESS;
}