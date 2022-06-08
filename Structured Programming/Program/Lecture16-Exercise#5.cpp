//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture16# 
/* Recommend£ºCompile and run the program£¬then output  */
#include <stdio.h>
#include <stdlib.h>
struct stdrec{
	char name[20];
	int id;
	};
	int main() { 
	struct stdrec *p;
	printf("***Dynamic Memory Allocation***\n\n");
	p = (struct stdrec *)malloc((sizeof(struct stdrec)));
	if (p){
		printf("Student Name: ");
		gets(p->name);
		printf("Student ID: ");
		scanf("%d%*c", &p->id);
		printf("Student Name: %-10s ",p->name);
		printf("ID: %4d\n", p->id);
	}
	else{
		printf("Out of memory\n");
	}
	return 0;
}
/* The iuput is: Jack 1930016143
  The output is: 
  ***Dynamic Memory Allocation***
  Student Name: Jack
  Student ID: 1930026143
  Student Name: Jack       ID: 1930026143
*/
