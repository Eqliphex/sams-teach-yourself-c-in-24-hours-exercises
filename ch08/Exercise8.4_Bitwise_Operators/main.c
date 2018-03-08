/*
08E04:
Write a program that shows the values (in hex) 
of the expressions
0xFFFF^0x8888, 0xABCD & 0x4567, and 0xDCBA | 0x1234
*/

#include <stdio.h>

#define SUCCESS 0

/*
	Rules: (XOR) ^ 
	The ^ operator places 1 in the result if exactly one operand, but not both, is 1. Therefore,
	the expression 01 ^ 11 yields 10.

	Rules: (AND) &
	If both bits are 1, 1 
	is placed at the same position of the bit in the result. 
	If one or both of the bits is 0, 0 is placed in the result

	Rules:  (OR) | 
	The | operator places 1 in the result if either operand is 1. For example, the expression
	01 | 11 yields 11. The | operator yields a 0 bit if — and only if — both operand bits
	are 0
 */

int main()
{
	unsigned short e1 = 0xFFFF ^ 0x8888;
	unsigned short e2 = 0xABCD & 0x4567;
	unsigned short e3 = 0xDCBA | 0x1234;

	printf("Given the two hexadecimal numbers:\n0xFFFF and 0x8888\n");
	printf("The expression: \n0xFFFF ^ 0x8888 or 1111 1111 1111 1111 ^ 1000 1000 1000 1000 yields:\n");
	printf("Expected: 0x7777 or 0111 0111 0111 0111\n");
	printf("Result:   0x%04X\n\n", e1);

	printf("Given the two hexadecimal numbers:\n0xABCD and 0x4567\n");
	printf("The expression: \n0xABCD & 0x4567 or 1010 1011 1100 1101 & 0100 0101 0110 0111 yields:\n");
	printf("Expected: 0x0145 or 0000 0001 0100 0101\n");
	printf("Result:   0x%04X\n\n", e2);

	printf("Given the two hexadecimal numbers:\n0xDCBA and 0x1234\n");
	printf("The expression: \n0xDCBA | 0x1234 or 1101 1100 1011 1010 & 0001 0010 0011 0100 yields:\n");
	printf("Expected: 0xDEBE or 1101 1110 1011 1110\n");
	printf("Result:   0x%04X\n\n", e3);

	getchar();
	return SUCCESS;
}