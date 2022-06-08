//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture16# 
/* Recommend£ºModify the program to calculate and store Fibonacci sequence
into out.dat. Like this (first 10, start with 1): */
#include <stdio.h>
#include <stdlib.h>
	int main() { 
	int *ptr;
	ptr = (int*)malloc(sizeof(int)); 
	if (ptr != NULL) 
	*ptr = 23; 
	printf("Value stored is %d\n", *ptr); 
	free(ptr); 
	return 0;
}
// The output is: Value stored is 23 
