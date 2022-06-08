//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week4#Looping#
//Requirements:Write a program to compute 2^n using 'for'
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a positive integer:");
	scanf("%d", &a);
	b = 1;  // initialization
	for(c = 1; c <= a; c++)
	b = b * 2;
	
	printf("2^%d=%d", a, b);
	return 0;
}
