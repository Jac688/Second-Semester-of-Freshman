//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/18 
//Task no: Week13#Assignment4#1
/*Requirements: Input a sequence of data and save it in the array. Then set up a pointer to 
point to the first data of the array, output the data in array one by one by moving the pointer. 
Please also output the address of each data in the array. Assume that there are no more than 20 
data items. Note: You can decide the data type.  */
#include<stdio.h>
int main(){
	int a[20];
	int *p = a;  // The p points to the a[0]
	int i;
	printf("Please enter a sequence of integers and enter '-1' to stop: ");
	for(i = 0 ; i < 20; i++)
	{
		scanf("%d", &a[i]); // Scanf numbers one by one
		if(a[i] == -1) // Use ©\1 to indicate the end of input sequence
		{
			break;
		}
    }
    printf("The sequence of integers are: ");
    while(*p != -1){
    	printf("%d ", *p);
    	*p++;   //  Moving the pointer, *(p + n) is same as a[n]
	}
	return 0;
}


