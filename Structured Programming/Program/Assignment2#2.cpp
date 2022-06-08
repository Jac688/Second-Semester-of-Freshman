//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/19
//Task no: Week9#Assignment2#2
/*Requirements:Write a program, read a string (use %s, assume the string has no space) and a character. 
Remove the character from the string and print out the resulting string. For example, if the string is 
abcd and the character is c, then the resulting string is abd; if the string is abcd and the character is f,
then the resulting string is still abcd */
#include<stdio.h>
#include<string.h>
int main(){
	char s1[10], s2[10];
	printf("please enter a string:");
	gets(s1);  // Read a string 
	char c;
	printf("please enter a character:");
	scanf("%c", &c);  // Read a character
	int i, n = 0;
	for(i = 0; s1[i] != '\0'; i++)
	// Remove the character from the string
	{
		if(s1[i] != c){
			s2[n] = s1[i];  // Use a new string to substitute
			n++;
		}
	}
	printf("%s", s2);  // Print out the resulting string
	return 0;	
} 
