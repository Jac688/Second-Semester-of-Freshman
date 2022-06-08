//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/10
//Task no: Week4#Task17#
/*Requirement: Write a program to add all the positive 
integers which satisfy all the following conditions:
1.under 1000, 
2.multiple of 5, and
3.not multiple of 7.      */
#include<stdio.h>
int main()
{
	int i;
	for(i = 0; i < 1000; i++)
	{
		if(i % 5 == 0)
		{
			if(i % 7 != 0)
			printf("%d ", i);
		} 
	}
	return 0;
}
