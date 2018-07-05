﻿/* 09L05: Using pow(), and sqrt() math functions */
#define SUCCESS 0

#include <stdio.h>
#include <math.h>


int main()
{
	double x, y, z;

	x = 64.0;
	y = 3.0;
	z = 0.5;

	printf("pow(64.0, 3.0) returns: %7.0f\n", pow(x, y));
	printf("sqrt(64.0) returns:     %2.0f\n", sqrt(x));
	printf("pow(64.0, 0.5) returns: %2.0f\n", pow(x, z));

	return SUCCESS;
}

/*
* Output:
*
* → pow(64.0, 3.0) returns: 262144
* → sqrt(64.0) returns: 8
* → pow(64.0, 0.5) returns: 8
*/
