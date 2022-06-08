//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/10
//Task no: Week4#Task15#
/*Requirement: Write a program using nested for statement 
to print out the following pattern:
*******
******
*****
****
***
**
*            */
#include<stdio.h>
int main()
{
	int n = 7;
	int c, r;
	for(r = 1; r <= n; r++)
	{
		for(c = 7; c >= r; c--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
