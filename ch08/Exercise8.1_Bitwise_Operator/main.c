/*
08E01:
Using compliment operators.
*/

#include <stdio.h>

#define SUCCESS 0

/*
	Finding the compliment in your head: (Two's compliment)
	First I converted the number 0xEFFF to binary 1110 1111 1111 1111 
	And then i found the compliment (bit flip) 0001 0000 0000 0000
	Giving the result of: 1000

	Converting y:
	0x1000 = 0001 0000 0000 0000
	~y = 1110 1111 1111 1111

	signed/unsigned - Leftmost bit taken as an indicator (plus = 0) (minus = 1) effectivly halving the upper capacity from +65,535 to +32,767/-32,767 
*/

int main()
{
	unsigned short x = 0, y = 0; // 16 bits(4 bytes) instead of 32 bits (8 bytes) integer
	x = 0xEFFF;
	y = 0x1000;

	printf("Given the values: x = 0X%04X, binary: 1110 1111 1111 1111\n	      and y = 0X%04X, binary: 0001 0000 0000 0000\n\n", x, y);
	printf("The bitwise compliment \"~\", which reverses each bit, is:\n");
	printf("Expected value for ~x: 0X1000 --- Actual value: 0X%04X\n", (unsigned short)~x);
	printf("Expected value for ~y: 0XEFFF --- Actual value: 0X%04X", (unsigned short)~y);

	getchar();
	return SUCCESS;
}