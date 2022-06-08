//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/29 
//Task no: Week11#Assignment3#1 
/*Requirements: Please write a recursive function int strchar (char str[], char ch) which will return 
the number of occurrences of the ch in the str. For example, strchar("abac", 'a') will return 2. 
Please also write a main function which will call strchar and print return value.  */
#include<stdio.h>
int strchar(char str[], char ch);
int main()
{
	char s[10];
	char c;
	printf("Please enter a string:");  
	gets(s);  // Read a string
	printf("Please enter a character:");  
	scanf("%c", &c);  // Read a character
	printf("The number of occurrences of the character in the string is %d", strchar(s, c));  // Function call
	return 0;
}
int strchar(char *str, char ch){  // str points to s 
	if(*str == '\0') // Base case
		return 0;
	if(*str == ch)
		return 1 + strchar(str + 1, ch);  //str + 1 is equal to s[0+1] 
	else
		return strchar(str + 1, ch);  
}
