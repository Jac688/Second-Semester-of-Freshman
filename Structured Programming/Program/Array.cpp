//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/16
//Task no: Week5#Lecture8#
//Requirements: explain '\0'.
#include<stdio.h>
#include <string.h>
int main () {
	char word[20];
	
	word[0] = 'H'; 
	word[1] = 'e'; 
	word[2] = 'l'; 
	word[3] = 'l'; 
	word[4] = 'o'; 
	
	printf("The word is %s\n", word );
	printf("The length of string is %d", strlen(word));
	return 0; 
}
/* 1.What is the results of the example in the previous slide if (word[5] = '\0';) is deleted?  Why? 

   No any change in output, because '\0' means the end of string. 
   
   2.What is the value of a[2] if we have the following initialization of an array
   ¨Cint a[5] = {2, 4, 6, 8, 10}
   
   It begins from a[0], so a[2] should be the third number = 6.
   
   3.What is the value of a[1][1] if we have the following initialization of an array
   ¨Cint a[2][3] = {2, 4, 6, 8, 10, 12}
   
   a[2][3] = {2, 4, 6, 8, 10, 12} == {{2, 4, 6}, {8, 10, 12}}, and two value in the [] begin
   from the zero. Therefore, a[1][1] = 10.
    */
   
   

