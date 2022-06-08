//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/29 
//Task no: Week11#Assignment3#1 
/*Requirements: The sub-function inverse will be responsible for inversing the integers in an array 
inputted as parameter. E.g., the original data in the parameter array are in the sequence 20 10 40 5;
after calling of the function inverse, the data in the array are in the sequence 5 40 10 20. The inverse
function can include more than one parameter so that the elements in the array can be inversed. 
The main function will do the following jobs.
i. read a sequence of integers (assume that the total number of integers is less than 
20)and store the data from keyboard in an array named Data in the inputted sequence. 
ii. Call the function inverse£¬passing the array Data (and other necessary information) as 
the actual parameters. 
iii. Print out the elements in the array Data in their sequence in the array. */ 
#include<stdio.h>
int inverse(int a[], int a1[], int n, int x){  //Function declaration
	a[x] = a1[n-x];  // Make datas in the array inverse
	return a[x];   // Return the the inverse one
}

int main()
{
	int a[20];
	int a1[20];  // Use the second array, make sure the loop will not be disturbed
	int i;
	printf("Please enter a sequence of integers(Enter key to end):");
	for(i = 0; i < 20; i++){
		scanf("%d", &a[i]);
		if(getchar() == '\n')  // End the reading of numbers when you press the Enter key
			break;
	}
	int x = 0;
	for(x = 0; x <= i ; x++){
		a1[x] = a[x];  // Copy the a[] to the a1[]
	}
	
	printf("The inverse data in the sequence is:");
	for(x = 0; x <= i; x++){  // Inverse one by one with loop statements
		printf("%d ", a[i]);  // Function call
	}
	return 0;
}



