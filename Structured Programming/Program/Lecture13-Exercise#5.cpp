//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/20 
//Task no: Week10#Lecture13#
/*Requirements: */
#include<stdio.h>
int main(){
	int m;
	int grade[10];
	printf("Please input the value of m:");
	scanf("%d", &m);
	printf("m = %d is stored at address %x \n", m, &m);
	printf("grade[2] is stored at address %x \n", &grade[2]);
	printf("grade[0] is stored at address %x \n", &grade[0]);
	printf("the starting address of the array is %x \n", grade);
	return 0;
} 
