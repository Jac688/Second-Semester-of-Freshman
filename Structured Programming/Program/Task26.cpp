//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/14 
//Task no: Week9#Task26#
/*Requirements: Write a program that includes two functions: 
main function and Fac(int n). Function main reads a positive integer n, 
and calls the function Fac to compute the factorial number of n. */
#include<stdio.h>
int fac(int n){   // Assume n >= 0 
	int rec;
	if(n <= 1)  // Base case
		return 1;
	rec = n * fac(n-1); // Recursive step
	return rec; 
}
int main()
{
	int n;
	printf("please enter a positive integer:"); 
	scanf("%d", &n);
	printf("The factorial number of the positive integer is %d", fac(n)); 
	//calls the function Fac to compute the factorial number of n; fac(n) = rec
	return 0;
}
