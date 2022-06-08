//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/29 
//Task no: Week11#Assignment3#2
/*Requirements: There is a sequence of numbers a1, a2, a3, бн, an. Where an = 2an-1 + 1, a1= 2.
Please write a program to find a16. Use recursive function.  */
#include<stdio.h>
int sequence(int n);  // Function declaration
int main()
{
	int i = 16;
	printf("a16 is equip to %d", sequence(i));  // Function call
	return 0;
}
int sequence(int n){
	int x;
	if(n == 1)  // a1 = 2
		return 2;
	
	x =  2*(sequence(n-1)) + 1;  // an = 2(an-1) + 1
	return x;  // Return to main function
}
