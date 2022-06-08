//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/3
//Task no: Week3#Task9#
/*Requirements: Output two results: 
one is about "integer divided by", another uses "float divided by".
For the "float divided by", round the result to 2 decimal places
(refer to task 3 for how to achieve this).*/ 
#include <stdio.h>
int main ()
{
	int a, b;
	float c;
	
	printf("please enter two integers: ");
	scanf("%d %d", &a, &b);
	c = 1.0 *a / b;
	// change "a" to float, then it can output "c" //
	printf("Integer: %d divided by %d is %d\n", a, b, a/b);
	printf("Float: %d divided by %d is %.2f", a, b, c);
	/* add ".2" between the "%" and "f",
	   and there are two digits after decimal point */
}
