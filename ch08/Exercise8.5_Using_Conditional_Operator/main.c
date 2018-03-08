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
		//x = getchar();
		putchar(x);
		printf("\nx in int: %d and x in char format: %c\n", x, x);
	}
	printf("\nOut of the for loop. Bye!\n");


	/*
	//Is the same as the following while-loop:
	*/
	
	int y = 0;
	while (y != 'q' ? 1 : 0)
	{
		y = getc(stdin);
		putc(y, stdout);
	}
	
	printf("Out of While-loop");

	getchar();
	return SUCCESS;
}