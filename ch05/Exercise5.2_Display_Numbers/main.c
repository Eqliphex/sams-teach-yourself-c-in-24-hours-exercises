/*05E02: Display the two numbers "123" & "123.456" and allign them at the left edge of the field.*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int num1 = 123;
	float num2 = 123.456;

	/*Right-allign*/
	printf("Printout of num1: %d\n", num1);
	printf("Printout of num2: %5.3f\n", num2);

	/*Left-allign*/
	printf("Printout of num1: %-d\n", num1);
	printf("Printout of num2: %-5.3f\n", num2);

	
	return SUCCESS;
}