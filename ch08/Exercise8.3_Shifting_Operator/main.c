/*
08E03:
Given x = 123 and y = 4, write a program that displays 
the results of the expressions x << y and x >> y.
Remember: left-side is shifted right-side amount of times
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y, z, oldValue, newValue;
	x = 123;
	oldValue = 0;
	newValue = 0;
	y = 4;
	z = 0;

	/* Left shift */
	printf("Given the values: x = %d, and y = %d\n\n", x, y);
	
	printf("Using left shift on x << y yields: %d\n", z = x << y);
	
	printf("\n1. Operation: %d * 2\n", x);
	printf("After 1. shift:\n2 * %d = %d\n", x, newValue = x * 2);
	oldValue = newValue;
	
	printf("\n2. Operation: %d * 2 * 2\n", x);
	printf("After 2. shift:\n2 * %d = %d\n", oldValue, newValue *= 2);
	oldValue = newValue;

	printf("\n3. Operation: %d * 2 * 2 * 2\n", x);
	printf("After 3. shift:\n2 * %d = %d\n", oldValue, newValue *= 2);
	oldValue = newValue;

	printf("\n4. Operation: %d * 2 * 2 * 2 * 2\n", x);
	printf("After 4. shift:\n2 * %d = %d\n", oldValue, newValue *= 2);
	oldValue = newValue;
	
	/* Right shift */
	printf("\nUsing right shift on x >> y yields: %d\n", z = x >> y);

	printf("\n1. Operation: %d / 2\n", x);
	printf("After 1. shift:\n2 / %d = %d\n", x, newValue = x / 2);
	oldValue = newValue;

	printf("\n2. Operation: %d / 2 / 2\n", x);
	printf("After 2. shift:\n2 / %d = %d\n", oldValue, newValue /= 2);
	oldValue = newValue;

	printf("\n3. Operation: %d / 2 / 2 / 2\n", x);
	printf("After 3. shift:\n2 / %d = %d\n", oldValue, newValue /= 2);
	oldValue = newValue;

	printf("\n4. Operation: %d / 2 / 2 / 2 / 2\n", x);
	printf("After 4. shift:\n2 / %d = %d\n", oldValue, newValue /= 2);
	oldValue = newValue;
	
	getchar();
	return SUCCESS;
}