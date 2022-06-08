//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture16# 
/* Recommend£ºCompile and run the program£¬then output. Using the student record struct in Ex 5
Design C program to enter and print (says) 10 student records using memory allocation technique.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
int main() { 
	int number, i; 
	int *ptr; 
	printf("How many integers would you like store? "); 
	scanf("%d", &number); 
	ptr = (int*)malloc(number * sizeof(int)); 
	if(ptr != NULL){ 
		for(i = 0; i < number; i++){
		 	*(ptr + i) = i; 
		}
		for(i = number; i > 0; i--) 
			printf("%d\n", *(ptr + (i - 1))); 
		free(ptr);
	}
	return 0;
}
// If the iuput is 5, outout is 4 3 2 1 0.
