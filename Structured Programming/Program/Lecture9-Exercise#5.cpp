//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/23
//Task no: Week6#Lecture9#
/*Requirements: Based on the previous example, write a C program to input a 
  number and calculate the: 
1) Square Root (using sqrt()) and 
2) Log base 10 (using log10())
3) Natural log (using log())
  Using number 10 to test for it.
*/

#include<stdio.h>
#include<math.h>
int main()
{
	double d;
	printf("Input any number:");
	scanf("%lf", &d);
	double x = sqrt(d); //sqrt: declared in math.
	double l = log10(d);
	double n = log(d);
	printf("The Square Root of %f = %f\n", d, x); //printf: declared in stdio.h.
	printf("Log10 of %f = %f\n", d, l);
	printf("The natural log of %f = %f", d , n);
	
	return 0;
}
/* If the input is 10,
   the output is:The Square Root of 10.000000 = 3.162278
				 Log10 of 10.000000 = 1.000000
				 The natural log of 10.000000 = 2.302585
*/
