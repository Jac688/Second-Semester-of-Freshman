//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/19
//Task no: Week9#Assignment2#3
/*Requirements: Read a line of sentence of English words and then change the first letter of each word
to upper case. Output the changed sentence. Assume that the number of characters in the sentence is less
than 100.The program should include a sub-function which perform the case change for a sentence */ 
#include<stdio.h>
#include<string.h>
int upperCase(int); // Sub-function prototypes
int main(){
	char s[100];
	printf("Please enter line of sentence of English words:");
	gets(s);
	int i;
	i = s[0];
	s[0]= upperCase(i); // Function call
	printf("%s", s);
	return 0;
}
int upperCase(int i){ // This sub-function perform the case change for a sentence
	i -= 32;  // According to the ASCII value, completing case conversion.
	return i;
}
