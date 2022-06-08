
//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/10
//Task no: Week4#Task15#
/*Requirement: Write a program using nested for statement to print out the 
following pattern
*******
******~
*****~~
****~~~
***~~~~
**~~~~~
*~~~~~~      */
#include<stdio.h>
int main()
{
	int r, c;
	for(r = 1; r <= 7; r++)
	{
		for(c = 7; c >= 1; c--)
		{
			if(c >= r)
			printf("*");
			else    //if (c < r) 
			printf("~");
		}
		printf("\n");
	}
	return 0;
} 
