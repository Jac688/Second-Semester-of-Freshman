//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/3
//Task no: Week3#Task13#
/*Requirements: Use switch statement to 
implement a program that can read and 
transfer a GPA grade to GPA point. 
Output a warning if any invalid grade is input*/ 
#include <stdio.h>
int main ()
{
	char GPA;
	printf("enter your GPA:");
	scanf("%c", &GPA);
	
	switch (GPA)
	{
		case 'A':
		case 'a':printf("4.00");
		// case'A' and case'a' have the same result //
		break;
		case 'B': // "break" is necessary" // 
		case 'b':printf("3.00");
		break; 
		case 'C':
		case 'c':printf("2.00");
		break;
		case 'D':
		case 'd':printf("1.00");
		break;
		case 'F':
		case 'f':printf("0.00");
		break;
		default: printf("Invalid operator!");
	}
}
