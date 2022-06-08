//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/13 
//Task no: Week9#Lecture11#
//Requirements: What is the value of number?
#include<stdio.h>
int number; //number: global variable
void increment(int num) // num: local variable
{ 
	num = num + 1; 
	printf("%d\n", num); 
	number = number + 1; 
} 
int main() 
{ 
	number = 1; 
	increment(number); 
	printf("%d\n", number);
}
// The value of number is 2.
