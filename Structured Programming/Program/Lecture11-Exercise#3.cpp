//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/13 
//Task no: Week9#Lecture11#
/* Requirements: Compare the following three examples, what is the value 
of k after the function call */
#include <stdio.h>
/*
void foo(int);
int main(void)
{
	int k = 10;
	foo(k);
	printf("%d", k);
}
void foo(int j) 
{
	j = 0;
}
The value of k after the function call is 0;
**********************************************
void foo(int);
int main(void) 
{
	int k = 10;
	foo(k);
	printf("%d", k);
}
void foo(int k) 
{
	k = 0;
}
The value of k after the function call is 10;
**********************************************
void foo(int *j);
int main(void) 
{
	int k = 10;
	foo(&k);
	printf("%d", k);
}
void foo(int *j) 
{
	*j = 0;
}
The value of k after the function call is 0;
**********************************************/ 
