//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/4 
//Task no: Week12#Lecture15# 
/* Recommend£ºCompile and run the program£¬create a text file
infile.txt£¬then output */
#include<stdio.h>
int main() 
{
	FILE *fp;
	char stuName[20];
	int stuID;
	fp = fopen("infile.txt", "r");
	while(fscanf(fp,"%s %d",stuName,&stuID)!= EOF)
		printf("%s %d\n", stuName, stuID);
	fclose(fp);
	return 0;
}
/* The output is:
   Jerry 20
   Jim 10
   Tony 12        */
