//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/27 
//Task no: Week10#Lecture14#
/*Requirements: Show the output. */
#include<stdio.h>
int main()
{
	int value1 = 5, value2 = 15; 
	int *p1, *p2; 
	p1 = &value1;  // Initialize pointer
	p2 = &value2;  // Initialize pointer
	*p1 = 10;   // Assign value1 to 10, value1 = 10 
	*p2 = *p1;  // Assign value1 = 10 to value2 = 10
	p1 = p2;   // p2 points to value1, and value1 is asssigned to 10
	*p1 = 20;  // Assign value1 = 10 to value = 20
	printf("%d %d", value1, value2);
	return 0;
}
/* Output is 10 20  */
