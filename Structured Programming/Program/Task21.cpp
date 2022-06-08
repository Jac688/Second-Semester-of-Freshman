//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/17
//Task no: Week5#Task19#
/*Requirements: Write a program to read a sequence of positive integers and
                sort them in ascending order and then in descending order. 
				You can use ©\1 to indicate the end of input sequence. Assume
				that the length of input sequence is less that 20.  */
#include <stdio.h>
int main()
{
	int i, j, k, n, x; 
	int a[30];
	printf("Please enter a sequence of positive numbers:"); 
	
	for(i = 0 ;i < 30; i++)
	{
		scanf("%d", &a[i]); // Scanf numbers one by one
		if(a[i] == -1) // Use ©\1 to indicate the end of input sequence
		{
			break;
		}
    }
	for(k = 0; k <= i - 2; k++) // It is relative to 'i'
	{
		for(j = k+1; j <= i - 1; j++)
		if(a[k] < a[j])  // descending order
		{ 
			n = a[k];
			a[k] = a[j];
			a[j] = n;
		}
	}
	printf("descending order:");
	
	for(x = 0; x <= i - 1; x++)
		printf("%d ", a[x]);
		
	for(k =0; k <= i - 1; k++)
	{
		for(j = k+1; j <= i - 1; j++)
		if(a[k] > a[j]) // Ascending order
		{
			n = a[k];
			a[k] = a[j];
			a[j] = n;
		}
	}
	printf("\nascending order:");
	for(x = 0; x <= i - 1; x++)
		printf("%d ", a[x]);
	return 0;
}

