//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/18 
//Task no: Week13#Assignment4#1
/*Requirements: Write a program which includes two functions. The main function reads the 
sequence of integers (assume ends with -1), a sub-function will find the biggest integer 
and lowest integer. The main function will call the sub-function, pass the integers to it 
through parameters, and print the biggest integer and lowest integer.  */
#include<stdio.h>
int biggest(int a[], int i){
	int max = a[0], x;  // Begin from the a[0]
	for(x = 0; x < i; x++){
		if(max < a[x]){  // If there is a number bigger than previous one, it wil replace the one
			max = a[x];
		}
	}
	return max;
}

int lowest(int a[], int i){
	int min = a[0], x;  // As same as the max, it also begin from the a[0]
	for(x = 0; x < i; x++){
		if(min > a[x]){  // If there is a number bigger than previous one, it wil replace the one
			min = a[x];
		}
	}
	return min;
}
int main(){
	int i;
	int a[20];
	printf("Please enter a setence of integers and enter '-1' to stop: ");
	for(i = 0 ; i < 20; i++)
	{
		scanf("%d", &a[i]); // Scanf numbers one by one
		if(a[i] == -1) // Use ©\1 to indicate the end of input sequence
		{
			break;
		}
    }
    printf("The biggeest integers in the sequence is: %d", biggest(a, i));  // Function call, passed the max
    printf("The lowest integers in the sequence is: %d", lowest(a, i));  // Function call, passed the min
    return 0;
}

