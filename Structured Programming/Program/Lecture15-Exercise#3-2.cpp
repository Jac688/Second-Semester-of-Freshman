//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture15# 
/* Recommend£ºModify the program to calculate and store Fibonacci sequence
into out.dat. Like this (first 10, start with 1): */
#include <stdio.h>
int main() { 
	int n, x;
	int i = 0, t = 1; 
	FILE *outfile;
	outfile = fopen("out.dat","w"); 
	for (n = 0; n < 10; n++){
		x = i + t;
		fprintf(outfile,"%d\n", x);
		i = t;
		t = x;
	}
	fclose(outfile); 
	return 0;
}
// n = (n-1) + (n-2)
// The output is: 1 2 3 5 8 13 21 34 55 89 
