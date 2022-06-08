//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/9
//Task no: Week1#Assignment1#
/*Requirements: Write a program to input a positive integer 
which has exactly two digits (assume users always input correctly)
and output an inverted number. */
#include<stdio.h>
int main()
{
	int a;
	int b = 0, c = 0;
	printf("Please enter a positive integer which has exactly two digits:");
	scanf("%d", &a);
	
	b = a / 10; //Get tens digit
	c = a % 10; //Get ones digit
	
	if(c > 0)  //two condition
	printf("%d%d", c, b);
	else  // if c = 0
	printf("%d", b);
	return 0;
}
