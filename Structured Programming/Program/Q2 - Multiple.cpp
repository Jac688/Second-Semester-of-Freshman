//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/9 
//Task no: Week1#Assignment1#
//Requirements:Write a program to input an integer and decide if it is multiple of 3 or 2
#include<stdio.h>
int main()
{
	int a;
	printf("Please enter an integer:");
	scanf("%d", &a);
	
	if(a % 2 == 0)
	{
		printf("%d is multiple of 3 or 2", a); 
	} else  // a % 2 != 0
	{
		if(a % 3 == 0)
		printf("%d is multiple of 3 or 2", a);
		else // a % 2 != 0 and a % 3 != 0
		printf("%d is not multiple of 3 or 2", a);
	}
	return 0;
}
