//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/24
//Task no: Week6#Task23#
/*Requirements: Compare ASCII code of any two
  characters and return 1, 0, or -1 accordingly. */
#include<stdio.h>
int compareASCIICode(int c, int d); // function prototype
int main()
{
	int value;
	int a, b;
	char s[2];
	printf("please enter two characters:");
	scanf("%c %c", &s[0], &s[1]);
	a = s[0], b = s[1]; // Convert characters to integers
	if(compareASCIICode(a, b) == 1)
		printf("The character '%c' is bigger than character '%c'", s[0], s[1]);
	if(compareASCIICode(a, b) == -1)
		printf("The character '%c' is smaller than character '%c'", s[0], s[1]);
	if(compareASCIICode(a, b) == 0)
		printf("The character '%c' is equal to character '%c'", s[0], s[1]);
	return 0;
	/* The main function print out comparison results according
	   to the return value from the compareASCIICode function. */ 
}
int compareASCIICode(int c, int d){
	if (c > d)
		return 1; 
	if (c < d)
		return -1; 
	if(c == d)
	    return 0;	
	// Compare ASCII code o f any two characters and return 1, 0, or -1 accordingly.
}
