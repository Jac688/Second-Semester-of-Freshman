//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/19
//Task no: Week9#Assignment2#1 
/*Requirements:There is an array with sorted values {3, 10, 15, 30, 55, 77}. 
Please write a program to read an integer from keyboard, insert this value 
into proper place of the array so that the new array is still sorted.
Output the updated sorted array values */ 
#include<stdio.h>
int main(){
	int a[7]= {3, 10, 15, 30, 55, 77};
	int i;
	printf("please enter a value:");
	scanf("%d", &i);
	a[6]= i;          //Insert this value into the array
	printf("%d", a[6]);
	int j, k, n;
	for(k = 0; k <= 5; k++) // Insert into proper place of the array so that the new array is still sorted
	{
		for(j = k+1; j <= 6; j++)
			if(a[k] > a[j]) // Ascending order
			{
				n = a[k];
				a[k] = a[j];
				a[j] = n;
			}
	}
	int x;
	printf("\nAscending order:"); // Output the updated sorted arrayvalues
		for(x = 0; x <= 6; x++)
			printf("%d ", a[x]);
	return 0;
} 
