/* 09L03: Using %hd, %ld, and %lu specifiers */
#include<stdio.h>

#define SUCCESS 0

int main()
{
	short int shortInt;
	unsigned int unsignedInt;
	long int longInt;
	unsigned long int unsignedLongInt;

	shortInt = 0xFFFF;
	unsignedInt = 0xFFFFU;
	longInt = 0xFFFFFFFFl;
	unsignedLongInt = 0xFFFFFFFFL;

	printf("The short int of 0xFFFF is %hd.\n", shortInt);
	printf("The unsigned int of 0xFFFF is %u.\n", unsignedInt);
	printf("The long int of 0xFFFFFFFF is %ld.\n", longInt);
	printf("The unsigned long int of 0xFFFFFFFF is %lu.\n", unsignedLongInt);
	
	return SUCCESS;
}

// Output:
// → The short int of 0xFFFF is - 1.
// → The unsigned int of 0xFFFF is 65535.
// → The long int of 0xFFFFFFFF is - 1.
// → The unsigned long int of 0xFFFFFFFF is 4294967295