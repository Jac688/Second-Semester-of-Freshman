//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/23
//Task no: Week6#Lecture9#
/*Requirements: Compile this program and submit your 
CPP and answer using two numbers 16 and -20.  */ 
#include <stdio.h>
int absolute(int); 
int main()
{
	int value, answer;
	printf("Input an integer (positive or negative) : ");
	scanf("%d", &value); 
}
int absolute(int x){
	if (x >= 0)
		return x; 
	else
		return -x; 
}
/*
  The input: 16
  - The output: The absolute value is 16.
  
  The input: -20
  - The output: The absolute value is 20.
*/
