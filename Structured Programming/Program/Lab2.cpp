//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week2#Task6#
//Requirements:Output and Expain
#include<stdio.h>
int main()
{
	int i = 10, j = 5;
	float x = 5.0, y;
	
	y = x / i; 
	printf("y = %f\n", y);
	
	y = 0;
	y = j / i;
	printf("y = %f\n", y);
	
	y = 0;
	y = (float)j / i; 
	printf("y = %f\n", y);
} 
// 1. When y = x / i, the output is y = 0.500000 //
// 2. When y = j / i, the output is y = 0.000000//
// 3. When y = (float)j / i, the output is y = 0.500000//
/* In 1 and 3, x and (float)j is defined to 'float', so y can output the result.
   In 2, both j and i are int, but y is defined to float, so it can not output the result. */

