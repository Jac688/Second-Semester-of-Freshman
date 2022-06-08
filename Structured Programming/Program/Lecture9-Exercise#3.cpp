//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/23
//Task no: Week6#Lecture9#
//Requirements: Run this program and submit your CPP and outputs.
#include<stdio.h>
	void printASCIICode(char);
	//void printASCIICode(char code);
int main()
{
	printASCIICode('A');
	printASCIICode('C');
	printASCIICode('F');
}
void printASCIICode(char code)
{
	printf("%c's ASCII code is %d\n",code, code);
	return;
}
/*
  The output is: A's ASCII code is 65
				 C's ASCII code is 67
	             F's ASCII code is 70
*/
