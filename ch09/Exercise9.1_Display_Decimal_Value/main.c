/* 09E01: Given the following statements,
 * int x;
 * unsigned int y;
 * x = 0xAB78;
 * y = 0xAB78; 
 * write a program to display the decimal values of x and y on the screen.
 * 
 * NOTE: For this program to with the book assignment, the int value is changed to its 16-bit short type.  
 */
#define SUCCESS 0

#include <stdio.h>

int main()
{
	short x = 0xAB78;
	unsigned short y = 0xAB78;

	printf("Decimal value of x is: %d\n", x);
	printf("Decimal value of y is: %u\n", y);

	return SUCCESS;
}

/*
* Output:
*
* → Decimal value of x is: 43896
* → Decimal value of y is: 43896
*/

/*
 * Explanation:
 * 
 * The hex number: 0xAB78, is represented in binary with
 * 0b1011 1100 0111 1000
 * And since the leftmost bit is used to indicate if the value is negative or not, 
 * the numbers change, when the value is signed or unsigned. 
 */