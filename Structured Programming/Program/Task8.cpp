//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/3
//Task no: Week3#Task8#
/*Requirements: read two integers, compare them and 
output the bigger one*/ 
#include <stdio.h>
int main ()
{
	int a, b, c;
	printf("Please enter two integers:");
	scanf("%d %d", &a, &b);
	c = (a > b)?a:b;
	// if a>b, c=a; if a<=b, c=b //
	printf("%d", c);
	return 0; 
}
