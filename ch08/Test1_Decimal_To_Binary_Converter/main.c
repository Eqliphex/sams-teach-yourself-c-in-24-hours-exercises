﻿/* Test:
* Mini project for testing and understanding the conversion of a decimal number to a binary representation. 
*/
#define SUCCESS 0

#include <stdio.h>

unsigned int convert_decimal_to_binary(unsigned int); // function declaration, could be put in a header file.

void convert_decimal_to_binary_bitshift(unsigned int decimal);

/*
* Division truncates towards zero, builds largest
*/
unsigned int convert_decimal_to_binary(unsigned int decimal)
{
	return (decimal == 0 || decimal == 1 ? decimal : ((decimal % 2) + 10 * convert_decimal_to_binary(decimal / 2)));
}

/*
Example 1:
convert_decimal_to_binary(1) =

1. recursionlayer
return ( 1 == 0 || 1 == 1 ? 1 : ((1 % 2) + 10 * convert_decimal_to_binary(1 / 2)));

Since the first condition is returning true with 1 == 1, then the number '1' is just returned


Output:
 → 1
((Program Terminated))
*/

/*
Example 2:
convert_decimal_to_binary(2) =

Recursionstack:
0x0

1. recursionlayer
return ( 2 == 0 || 2 == 1 ? 2 : ((2 % 2) + 10 * convert_decimal_to_binary(2 / 2)));

Since the condition is false, then the method is called recursivly, and 1. layer is waiting for a returned value.

Recursionstack:
1: ((2 % 2) + 10 * convert_decimal_to_binary(2 / 2))

2. recursionlayer
Input: convert_decimal_to_binary(1) =

return ( 2 == 0 || 2 == 1 ? 1 : ((1 % 2) + 10 * convert_decimal_to_binary(1 / 2)));

Since the termination rule is fulfilled with 1, the value is returned to the above laying layer.

Recursionstack:
1: ((2 % 2) + 10 * convert_decimal_to_binary(2 / 2))
2: 1

1: ((2 % 2) + 10 * 1)) => 0 + 10 

Output:
 → 10
((Program Terminated))
*/

void convert_decimal_to_binary_bitshift(unsigned int decimal)
{
	unsigned int bit;
	const int CHAR_BIT = 8;

	for (bit = 1u << (CHAR_BIT * sizeof bit - 1); bit; bit >>= 1)
	{
		printf("%c", decimal & bit ? '1' : '0');
	}
	printf("\n");
}

int main()
{

	signed short int intValueOne = 0x7A87; // 31.367
	unsigned int intValueOneBinary = convert_decimal_to_binary(4);
	convert_decimal_to_binary_bitshift(4);
	signed short int intValueTwo = 0x4AB6; // 19.126  154
	unsigned long int longIntResult;

	printf("First decimal value: %d\n", intValueOne);
	printf("First decimal value binary 0b%d\n", intValueOneBinary);
	printf("2 %% 2: %d\n", (2 % 2));

	//printf("The size of short int is: %d.\n", sizeof(short int));

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
* The numbers mean "how many bytes does this type take"
*                                |  Byte  |  Byte  |
* short int takes 2 bytes i.e. 0b0000 0000 0000 0000
*                               |  Byte  |   Byte  |  Byte   |  Byte  |
* long int takes 4 bytes i.e. 0b0000 0000 0000 0000 0000 0000 0000 0000
*                                  |  Byte  |   Byte  |  Byte   |  Byte   |  Byte   |   Byte  |  Byte   |  Byte  |
* long double takes 8 bytes i.e. 0b0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
*/
