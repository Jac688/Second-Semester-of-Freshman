//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week4#Looping#
//Requirements:Write a program to compute 2^n using 'do-while'
#include<stdio.h>
int main()
{
	int n = 10;
	int row; // Outer loop counter
	int col; // Inner loop counter

	for(row = 1; row <= n; row++)
	{
		for(col = 1; col <= row; col++)
		{
			printf("%d", row*col);
			if(row*col>=10)
			printf("  ");
			else
			printf("   ");// In order to align the numbers on the column 
		}
		printf("\n");
	}

	return 0;	
}
	
	
