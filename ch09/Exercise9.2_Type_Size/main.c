/* 09E02:
* Write a program to measure the sizes of short int, long int, and long double
* on your machine
*/
#define SUCCESS 0

#include <stdio.h>

int main()
{
	
	printf("The size of short int is: %d.\n", sizeof(short int));
	printf("The size of long int is: %d.\n", sizeof(long int));
	printf("The size of long double is: %d.\n", sizeof(long double));

	return SUCCESS;
}

/*
* Output: (My computer)
*
* → The size of short int is: 2.
* → The size of long int is: 4.
* → The size of long double is: 8.
*/

/*
* Explanation:
*
* The numbers mean "how many bytes of memory does this type take"
*                                |  Byte  |  Byte  |
* short int takes 2 bytes i.e. 0b0000 0000 0000 0000
*                               |  Byte  |   Byte  |  Byte   |  Byte  |
* long int takes 4 bytes i.e. 0b0000 0000 0000 0000 0000 0000 0000 0000
*                                  |  Byte  |   Byte  |  Byte   |  Byte   |  Byte   |   Byte  |  Byte   |  Byte  |
* long double takes 8 bytes i.e. 0b0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
*/

