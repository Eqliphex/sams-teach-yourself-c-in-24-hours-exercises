/*05L05: Converting to hex numbers*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	printf("Hex(uppercase)		Hex(lowercase)		Decimal\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%X			%x			%d\n", i, i, i);
	}

	return SUCCESS;
}