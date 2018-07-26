#include <stdio.h>

#define SUCCESS 0

/*Method to multiply two numbers, and returns the result*/
int multiply_numbers(int a, int b)
{
	return a * b;
}

int main()
{
	const int first_value = 4, second_value = 5;

	const int sum = multiply_numbers(first_value, second_value);

	printf("Product of %d and %d is: %d", first_value, second_value, sum);

	return SUCCESS;
}