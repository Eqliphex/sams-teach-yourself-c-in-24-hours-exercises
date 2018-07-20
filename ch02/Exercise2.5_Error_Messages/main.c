/* 02E05:
* What error messages will you get for the following program when you’re trying to
* compile it?
*/
#define SUCCESS 0

void main()
{
	printf("Howdy, neighbor!This is my first C program.\n");
	return SUCCESS;
}

/*
* Answer:
*
* In Visual Studio 2017, it shows the following error messages:
* 
* 1)
*	"Cannot resolve symbom 'printf'
* 2) 
*	"void function should not return a value." 
* 3)
*	"function void main, cannot return a value"
*
* To solve error 1, the library stdio.h must be included, where the printf-function is defined.
* 
* To solve error 2 and 3, the 'void' return type, must be changed with the 'int' return type. 
*/