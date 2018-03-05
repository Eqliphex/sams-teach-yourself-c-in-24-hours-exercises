/*
08L02:
Using the the logical AND operator
*/


#include <stdio.h>

#define SUCCESS 0

int main()
{
	int num;

	num = 0;
	printf("With the number %d, and the two relational expressions:\n", num);
	printf("(%d %% 2 == 0) && (%d %% 3 == 0)\n", num, num);
	printf("The AND operator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));

	num = 2;
	printf("With the number %d, and the two relational expressions:\n", num);
	printf("(%d %% 2 == 0) && (%d %% 3 == 0)\n", num, num);
	printf("The AND operator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));

	num = 3;
	printf("With the number %d, and the two relational expressions:\n", num);
	printf("(%d %% 2 == 0) && (%d %% 3 == 0)\n", num, num);
	printf("The AND operator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));

	num = 6;
	printf("With the number %d, and the two relational expressions:\n", num);
	printf("(%d %% 2 == 0) && (%d %% 3 == 0)\n", num, num);
	printf("The AND operator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));


	getchar();
	return SUCCESS;
}