//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/14 
//Task no: Week9#Task27#
/*Requirements: Write a program that includes two functions: 
main function and Power3(int n). Function main reads a positive integer,
and call the function Power3 to compute 3^n and print out the result.  */
#include<stdio.h>
int Power3(int);
int main()
{
	int n;
	printf("please enter a positive integer n:");
	scanf("%d", &n);
	printf("3^n of the positive integer is %d", Power3(n)); 
	//call the function Power3 to compute 3^n; Power3(n) = rec;
}
int Power3(int n){
	int rec; 
	if(n == 0)  // Base case
		return 1;
	rec =  3 * Power3( n - 1);  // Recursive step
	return rec;
}
