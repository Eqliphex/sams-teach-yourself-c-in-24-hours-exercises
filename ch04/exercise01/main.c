/*
	This program is designed to get the numeric values of provided chars and print them.
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	char first_char = 'Z';
	char second_char = 'z';
	char newline_char = '\n';

	printf("%c's numeric value: %d\n", first_char, first_char);
	printf("%c's numeric value: %d", second_char, second_char);
	printf("%c's numeric value: %d", newline_char, newline_char);

	getchar();
	return SUCCESS;
}