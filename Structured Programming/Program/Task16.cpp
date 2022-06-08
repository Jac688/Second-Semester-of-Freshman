//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/10
//Task no: Week4#Task16#
/*Requirement: Write a program using nested for statement 
to print out the following pattern:
*********
=======
*****
===
*               */
#include<stdio.h>
int main()
{
	int c, r;
	for(r = 5; r >= 1; r--)
	{
		for(c = r*2 - 1; c >= 1; c--)
		{   
			if(r % 2 == 0) // Distinguish the two situation = and * // 
			printf("=");
			else if(r % 2 == 1)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
