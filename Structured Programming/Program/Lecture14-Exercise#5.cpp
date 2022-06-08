//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/27 
//Task no: Week10#Lecture14#
/*Requirements: Show the output. */
#include<stdio.h>
int main()
{
	char strA[80] = "Hello";
	char strB[80];
	char *pA; /* a pointer to type character */
	char *pB; /* another pointer to type character */
	puts(strA); /* show string A */
	pA = strA; /* point pA at string A */
	puts(pA); /* show what pA is pointing to */
	printf("\n"); /* move down one line on the screen */
	pB = strB; /* point pB at string B */
	while(*pA != '\0') /* copy strB to strA */
		*pB++ = *pA++; 
	*pB = '\0'; 
	puts(pB);
	puts(strB); /* show strB on screen */
	return 0;
}
