//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture15# 
/* Recommend£ºCompile and run the program£¬then output */
#include <stdio.h>
int main() 
{
	FILE *fp;
	fp = fopen("test.txt", "w");
	if (fp == NULL){
		printf("Error: can't create file.\n"); 
		return 1; 
	}
	else{
		fprintf(fp, "%s", "Hello world!\n");
		printf("Hello world is printed into test.txt file");
	}
	fclose(fp);
	return 0;
}

// The output is: Hello world is printed into test.txt file //
// File test.txt is created //
