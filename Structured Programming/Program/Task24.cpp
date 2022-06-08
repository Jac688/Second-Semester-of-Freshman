//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/24
//Task no: Week5#Task24#
//Requirements: Write a program that includes two functions: main and stringLength.
int stringLength(char s[]);
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char a[50];
	printf("Please enter a string:");
	scanf("%s", &a);
	while(a[i] != '\0'){
		i++;
    }
    printf("%d",stringLength(a));
	return 0;
} 
int stringLength(char s[]){
	return strlen(s);
}
