//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/27
//Task no: Week10#Lecture14#
/*Requirements: Show the output. */
#include<stdio.h>
int main()
{
	int x = 3;
	int *p = &x; // Initialize pointer 
	printf("x = %d\n", x);
	printf("The address of x is %x \n", &x);
	printf("The value of p is %x \n", p);
	printf("The address of p is %x \n", &p);
	return 0;
}
/* Output is:
   x = 3
   The address of x is 62fe1c
   The value of p is 62fe1c
   The address of p is 62fe10
*/


