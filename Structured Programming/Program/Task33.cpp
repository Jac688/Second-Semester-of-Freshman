//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/6 
//Task no: Week12#Task_33# 
/* Recommend£ºWrite a function int fileCopy(char *destFileName, char *resFileName)
to copy the content from the file resFileName to the file destFileName. 
If the file is copied successfully, return 1, else return 0.
If the file copy successes, check the file content in fileName2.
The main function is as follows */
#include<stdio.h>
#include<string.h>
int fileCopy(char *destFileName, char *resFileName);
// Function declaration 
int main()
{
	char fileName1[20], fileName2[20];
	int flag;
	scanf("%s", fileName1); // read name of file (.txt) to be copied
	scanf("%s", fileName2); // read name of file (.txt) to copy to
	flag = fileCopy(fileName2, fileName1);  // Function call
	if(flag == 1)
		printf("Success");
	else
		printf("Failure");
	return 0;
}
int fileCopy(char *destFileName, char *resFileName){
	char str[20];
	int i = 0;
	FILE *file1;
	FILE *file2;
	file1 = fopen("resFileName.txt", "w");
	file2 = fopen("destFileName.txt", "w");
	fprintf(file1, "%s", resFileName);
	fprintf(file2, "%s", destFileName);
	fclose(file2);
	file2 = fopen("destFileName.txt", "a+"); // Append to a file from "resFileName.txt"
	while((fgets(&str[i], 20, file2) != NULL))
 	{
 		i++;  // Get the length of the string in the "destFileName.txt"
	}
	fclose(file1);
	fclose(file2);
	// Identify if the file copy successes
	if(strlen(resFileName)+strlen(destFileName) == i)
		return 1;
	else
		return 0;
}

