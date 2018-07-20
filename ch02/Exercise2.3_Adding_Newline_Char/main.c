/* 02E03:
* Update the program in Listing 2.1 by adding one more newline character into the
* message printed out by the printf() function. You should see two lines of the
* message on the screen after running the updated executable file:
* Howdy, neighbor!
* This is my first C program.
*/
#define SUCCESS 0

#include<stdio.h>

int main()
{
	printf("Howdy, neighbour!\nThis is my first C program.\n");

	return SUCCESS;
}

/*
* Output:
*
* → Howdy, neighbour!
*   This is my first C program.
*/