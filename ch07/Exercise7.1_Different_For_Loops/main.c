/*
07E01: What is the difference between the following two pieces of code?
for (i=0, j=1; i<8; i++, j++)
printf(“%d + %d = %d\n”, i, j, i+j);
for (i=0, j=1; i<8; i++, j++);
printf(“%d + %d = %d\n”, i, j, i+j);
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int i, j;

	printf("First for-loop:\n");
	for (i = 0, j = 1; i<8; i++, j++)
		printf("%d + %d = %d\n", i, j, i + j);
	
	printf("\nSecond for-loop:\n");
	for (i = 0, j = 1; i<8; i++, j++);
	printf("%d + %d = %d\n", i, j, i + j);

	getchar();
	return SUCCESS;
}