/*
06E05:
The following program is supposed to compare the two variables, x and y, for
equality. What’s wrong with the program? (Hint: Run the program to see what it
prints out.)
#include <stdio.h>
main()
{
	int x, y;
	x = y = 0;
	printf(“The comparison result is: %d\n”, x = y);
	return 0;
}
*/

#include <stdio.h>

#define SUCCESS 0

int main()
{
	int x, y;
	x = y = 0;
	printf("The comparison result x = y is : %d\n", x = y);
	printf("Assert Result: 0 - since it's an assigment operator and not a relational operator\n");
	printf("The correct comparison would be x == y and yields: %d\n", x == y);
	printf("Assert Result: 1\n");
	getchar();

	return SUCCESS;
}