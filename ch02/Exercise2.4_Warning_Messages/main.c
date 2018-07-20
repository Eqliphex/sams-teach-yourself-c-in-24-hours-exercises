/* 02E04:
* What warning or error messages, if any, will you get when you’re compiling the
* following program?
*/
#define SUCCESS 0

#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Howdy, neighbor!This is my first C program.\n");
	exit(0);
}

/*
* Answer:
*
* In Visual Studio 2017, it shows that the function "main" should have a return type. 
* The solution to the problem is to give the main-function a int return type in the function signature.
* Since the exit-function does not return anything, the exit-function call can be replaced with a return statement.
* 
*/