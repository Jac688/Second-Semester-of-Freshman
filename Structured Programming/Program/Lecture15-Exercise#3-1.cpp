//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture15# 
/* Recommend£ºModify the program to calculate and store Fibonacci sequence
into out.dat. Like this (first 10, start with 1): */
#include <stdio.h>
int main() { 
	int i; 
	FILE *outfile;
	outfile = fopen("out.dat","w"); 
	for (i=0;i<10;i++) { 
		fprintf(outfile,"%d\n",i+1); 
	} 
	fclose(outfile); 
	return 0;
}
// The outout is£º 1 2 3 4 5 6 7 8 9 10
