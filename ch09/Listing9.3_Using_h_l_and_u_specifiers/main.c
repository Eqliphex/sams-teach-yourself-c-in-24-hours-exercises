/* 09L03: Using %hd, %ld, and %lu specifiers */

/*
 * hd = sHort Digit
 * ld = Long Digit
 * lu = Long Unsigned
 * 
 * For more info visit:
 * https://en.wikipedia.org/wiki/C_data_types
 */
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

/* 
 * Output:
 *
 * → The short int of 0xFFFF is -1.
 * → The unsigned int of 0xFFFF is 65535.
 * → The long int of 0xFFFFFFFF is -1.
 * → The unsigned long int of 0xFFFFFFFF is 4.294.967.295
 *
 * Explanation:
 *                                                                                    |  Byte  |  Byte  |      |  Byte  |  Byte  |
 * Line 27 - Since a signed int can hold values ranging from -32.767 .. +32.767 <=> 0b1000 0000 0000 0000 to 0b0111 1111 1111 1111, 
 *           where presence of the most significant (i.e leftmost) bit shows if number is negative or not, 
 *           and 0xFFFF is hex for (16^4 - 1) <=> (2^16 - 1) = 65.535 = 0b1111 1111 1111 1111, 
 *           will the signed short int overflow, when it reaches above 0b0111 1111 1111 1111 (32.767), and count up from -32.767 until reaching -1.
 *           
 *           IMPORTANT: it's (65.536 - 1) because we start counting from 0, 1, 2... and not 1, 2, 3... i.e zero-based numbering. 
 * 
 * Line 28 - With the "unsigned" flag, is the most significant bit used as a value instead of a sign-flag. 
 *           The range of the int is therefore 0 ... 65.535, and 0xFFFF is shown correct.
 * 
 * Line 29 - Same as before, but with 32-bits instead of 16-bits.
 * 
 * Line 30 - With unsigned long, it can contain the value.  
 */       
