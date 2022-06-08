//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/30 
//Task no: Week7#Lecture10#
//Requirements: Check the output of the following code.
#include<stdio.h>
int main()
{
	char name1[16] = "Frans Coenen"; 
	char name2[16] = {'F','r','a','n','s', ' ','C','o','e','n','e','n','\0'}; 
	char name3[16] = {70,114,97,110,115,32,67,111,101,110,101,110,0}; 
	// The integers in the {} will charge to the characters with the ASCLL code
	printf("name1 = %s\n",name1); 
	printf("name2 = %s\n",name2); 
	printf("name3 = %s\n",name3);
	// name1 == name2 == name3
	return 0;
}
/*
  The output is  name1 = Frans Coenen
				 name2 = Frans Coenen
				 name3 = Frans Coenen
*/

