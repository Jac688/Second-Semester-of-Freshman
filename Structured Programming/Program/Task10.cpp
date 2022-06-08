//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/3
//Task no: Week3#Task10#
/*Requirements: Write a program according to the following 
control flow diagram and output the final value of n.*/ 
#include <stdio.h>
int main ()
{
	int n;
	printf("please enter an integer:");
	scanf("%d", &n);
	
	if(n > 0)
	{
		n = n + n;
	}else // This means"if n<=0"//  
	{
		n = -n;
		n = n + n; 
	}
	printf("%d", n);
}
