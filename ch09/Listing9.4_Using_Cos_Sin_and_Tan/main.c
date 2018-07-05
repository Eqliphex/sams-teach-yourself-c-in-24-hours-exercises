/* 09L04: Using sin(), cos, and tan() math functions */
#define _USE_MATH_DEFINES /*Flag defined in math.h preprocessor that we want access to defined values.*/
#define SUCCESS 0

#include<stdio.h>
#include <math.h>


int main()
{
	double degree = 45.0;    
	
	degree *= M_PI / 180; // Convert to radians

	printf("The sine of 45 is:     %f.\n", sin(degree));
	printf("The cosine of 45 is:   %f.\n", cos(degree));
	printf("The tangent of 45 is:  %f.\n", tan(degree));

	return SUCCESS;
}

/*
* Output:
*
* → The sine of 45 is: 0.707107.
* → The cosine of 45 is: 0.707107.
* → The tangent of 45 is: 1.000000.
*/
