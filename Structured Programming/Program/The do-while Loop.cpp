//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week4#Looping#
//Requirements:Write a program to compute 2^n using 'do-while'
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a positive integer:");
	scanf("%d", &a);
	b = 1;  // initialization
	c = 1;
	if(a==0)
	{
		printf("2^0=%d", c); 
	}else
	{
		do
		{
			b = b * 2;
			c++; // c = c + 1
		}
		while(c <= a);
		printf("2^%d=%d", a, b);
    }
    return 0; 
}
