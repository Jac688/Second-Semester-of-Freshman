//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week4#Looping#
//Requirements:Write a program to compute 2^n using 'while'
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a positive integer:");
	scanf("%d", &a);
	b = 1;  // initialization 
	c = 1; 
	
	while(c <= a)
	{
		b = b * 2;
		c++; // c = c + 1
	}
	printf("2^%d=%d", a, b);
	return 0;
}
