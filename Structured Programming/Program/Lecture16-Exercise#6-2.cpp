//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture16# 
/* Recommend£ºCompile and run the program£¬then output. Using the student record struct in Ex 5
Design C program to enter and print (says) 10 student records using memory allocation technique.*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
struct stdrec{
	char name[20];
	int id;
	};
int main() { 
	int number, i; 
	int *ptr; 
	struct stdrec *p;
	p = (struct stdrec *)malloc((sizeof(struct stdrec)));
	printf("How many integers would you like store? "); 
	scanf("%d", &number); 
	ptr = (int*)malloc(number * sizeof(int)); 
	if(ptr != NULL){ 
		for(i = 0; i < number; i++){
		 	*(ptr + i) = i; 
		}
		for(i = number; i > 0; i--){
			printf("Student Name: ");
			gets(p->name);
			printf("Student ID: ");
			scanf("%d%*c", &p->id);
			printf("Student Name: %-10s ",p->name);
			printf("ID: %4d\n", p->id);
		}
		free(ptr);
	}
	return 0;
}

 

