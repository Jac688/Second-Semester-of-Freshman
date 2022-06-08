//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/30 
//Task no: Week7#Lecture10#
//Requirements: Check the output of the following code.
#include<stdio.h> 
int main()
{
	char str[15]="unix and c";
	printf("%s", str);
	printf("\n");
	
	str[6]='\0';
	printf("%s", str); // Replace 'n' with '/0' and end the string.
	printf("\n");
	// str[15] become str[6]
	str[2]='%';  
	printf("%s", str); //Replace 'i' with '%' and there are only six characters.
	printf("\n");
	return 0;
}
/* 
  The output is  unix and c
                 unix a
                 un%x a
*/
