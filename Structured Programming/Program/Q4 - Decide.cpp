//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/9 
//Task no: Week1#Assignment1#
/* Requirements: Write a program to read one character and decide 
if it is a digit, an English letter or others. Give the */
#include<stdio.h>
int main()
{
	int i = 0;
	char c;
	printf("Please enter a character:");
	scanf("%c", &c);
	i = c;
	// According to the ASCII //
	if(i >= 65 && i <= 90)
	printf("The character is an English letter.");
	else if(i >= 97 && i <= 122)
	printf("The character is an English letter.");
	else if(i >= 48 && i<= 57)
	printf("The character is a digit.");
	else 
	printf("The character is others.");
	return 0;
}
