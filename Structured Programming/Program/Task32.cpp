//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/28
//Task no: Week10#Task_30# 
/* Recommend£ºWrite a function char* stringCopy(char *dest, char *src)
to copy the string stored in src to dest. The function strcpy is NOT
allowed to use. String.h CANNOT be included. The main function is as follows: */
#include<stdio.h>
char* stringCopy(char *dest, char *src);  // Function declaration
int main()
{
	char str1[20], str2[20];
	scanf("%s", str1);  // Read a string 
	stringCopy(str2, str1);  //Function calls
	printf("%s\n", str2);
	return 0;
}
char* stringCopy(char *dest, char *src){
	while(*dest != '\0'){  
		*dest = *src;  // copy str1 to str2
		*dest++;  // dest + 1
		*src++;  // src + 1
	}
} 
