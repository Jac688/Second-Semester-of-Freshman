//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/27
//Task no: Week10#Lecture14#
/*Requirements: Show the output. */
#include<stdio.h>
int main()
{
	int a = 100, b = 88, c = 8;
	int *p1 = &a, *p2, *p3 = &c;  // Initialize pointer 
	p2 = &b; 	// p2 points to b
	p2 = p1; 	// p2 points to a
	b = *p3; 	// Assign c to b, b = c = 8
	*p2 = *p3; 	// Assign c to a, a = c = 8
	printf("%d %d %d",a,b,c);
	return 0;
}
/*  Output is: 8 8 8  */

