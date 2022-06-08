//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/9
//Task no: Week4#Assignment1#
/*Requirements:Answer the questions (put answers as the comments below the program): 
When you build this program, what are the errors there?
After you fix the errors and re-build the project, are there warnings? Why? 
Fix the program by removing errors and warnings (assume the initial value of i is 0)*/ 
#include<stdio.h>
int main()
{
	int i = 0, j = 5;
	char ch;
	float f;
	scanf("%c", &ch);
	printf("%d is the ASCII code of '%c'\n", ch, ch);
	printf("the value of i is %d\n", i);
	i = ch;
	printf("the value of i is %d\n", i);
	return 0;
} 
/* 1. When you build this program, what are the errors there?
   The line in scanf is lack of '&' ;
   There are not header file(include<stdio.h) and function type(int) in front of 'main';
   There is lack of ';' after 'printf("the value of i is %d\n", i)'.
   
   2. After you fix the errors and re-build the project, are there warnings? Why?
   Yes, because the double quotes is chinese form.  */
   
   
