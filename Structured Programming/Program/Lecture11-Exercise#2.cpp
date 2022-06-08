//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/13 
//Task no: Week9#Lecture11#
//Requirements: What is the value of number?
#include<stdio.h>
int number; //number: global variable
void increment(int number) // number: local variable
{ 
	number = number + 1; //use the local number
} 
int main()
{
	number = 1; //use the global number
	increment(number); //use the global number
	printf("%d\n", number); //use the global number
}
// The value of number is 1.
