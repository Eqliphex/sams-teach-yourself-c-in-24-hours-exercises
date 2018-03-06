/*
08E01:
Using compliment operators.
*/

#include <stdio.h>

#define SUCCESS 0

/*
	Finding the compliment in your head:
	First I converted the number 0xEFFF to binary 1110 1111 1111 1111 
	And then i found the compliment (bit flip) 0001 0000 0000 0000
	Giving the result of: 1000

	Converting y:
	0x1000 = 0001 0000 0000 0000
	~y = 1110 1111 1111 1111

*/

int main()
{
	int x, y;

	x = 0xEFFF;
	y = 0x1000;

	printf("Given the values: x = 0X%04X, binary: 1110 1111 1111 1111\nand y = 0X%04X, binary: 0001 0000 0000 0000\n\n", x, y);
	printf("The bitwise compliment \"~\", which reverses each bit, is:\n");
	printf("Expected value for ~x: - 0X1000 - Actual value: 0X%4X", ~x);

	getchar();
	return SUCCESS;
}