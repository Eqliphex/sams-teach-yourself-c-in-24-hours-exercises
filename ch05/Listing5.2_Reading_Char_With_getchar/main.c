/*05L02: Reading input by calling getchar()*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int ch1, ch2;

	printf("Please type in two characters together:\n");
	ch1 = getc(stdin);
	ch2 = getchar();

	printf("The first character you just entered is: %c\n", ch1);
	printf("The first characters numerical value is: %i\n", ch1);

	printf("The second character you just entered is: %c\n", ch2);
	printf("The second characters numerical value is: %i\n", ch2);

	return SUCCESS;
}