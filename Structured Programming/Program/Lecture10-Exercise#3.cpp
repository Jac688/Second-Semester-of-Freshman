//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/30 
//Task no: Week7#Lecture10#
//Requirements: Check the output of the following code.
#include<stdio.h>
int main()
{
	char lName[81], fName[81];
	int id_num;
	
	puts("Enter the last name, firstname, ID number separated by spaces ");
	puts("then press Enter \n");
	// Enter the information to type 
	scanf("%s%s%d", lName, fName, &id_num); // Read the information
	printf("3 items entered: %s %s %d\n", fName,lName,id_num);
	return 0;
} 
/*
  The input is  Tony Towey 23456
 -The output is  3 items entered: Towey Tony 23456
*/
