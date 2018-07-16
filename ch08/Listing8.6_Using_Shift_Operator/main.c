/*
08L06:
Using shift operators
*/

#include <stdio.h>

#define SUCCESS 0
#define ARRAYSIZE 100

/*Helper method to show the decimals as a binary string for clarity*/
void decimal_to_binary_converter(int n)
{
	int binaryNumArray[ARRAYSIZE];

	int arrayIndex = 0;
	while (n > 0) {
		binaryNumArray[arrayIndex] = n % 2;
		n /= 2;
		arrayIndex++;
	}

	for (int j = arrayIndex - 1; j >= 0; j--)
		printf("%d", binaryNumArray[j]);
}

int main()
{
	int x, y, z;

	x = 255;
	y = 5;

	/*0X%04X means: 	
    The X means that it will print an integer, in hexadecimal, large X for large hexadecimal letters and x for small hexadecimal letters.
    The 4 means the number will be printed left justified with at least four digits, print spaces if there is less than four digits
    The 0 means that if there is less than four digits it will print leading zeroes.
	The 0X-prefix means that the number shown is in hexadecimal.
	*/
	printf("Given x = %4d, i.e., 0X%04X\n", x, x); // Insert binary conversion of x and y as third parameters
	printf("      y = %4d, i.e., 0X%04X\n", y, y);
	decimal_to_binary_converter(x);
	decimal_to_binary_converter(y);
	/*
		x >> y == x / 2 shift right
	*/
	z = x >> y;
	printf("x >> y yields: %6d, i.e, 0X%04X\n", z, z);

	/*
		x << y == x * 2 shift left
	*/
	z = x << y;
	printf("x << y yields: %6d, i.e, 0X%04X\n", z, z);


	getchar();
	return SUCCESS;
}
