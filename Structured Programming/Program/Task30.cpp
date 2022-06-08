//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/28
//Task no: Week10#Task_30# 
/* Recommend£ºModify the following program 
so that values of a and b can be exchanged. */
#include<stdio.h>
void exchange(int *x, int *y); // Function declaration
int main()
{
	int a = 10, b = 20;
	printf("before exchange: a = %d, b = %d\n", a, b);
	exchange(&a, &b); // a and b are pointees
	printf("after exchange: a = %d, b = %d\n", a, b);
	return 0;
}
void exchange(int *x, int *y){
	// x points to int a, y points to b
	int temp;  
	temp = *x;
	*x = *y;
	*y = temp;  // a and b can be exchanged.
}
