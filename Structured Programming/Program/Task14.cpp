//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/10
//Task no: Week4#Task14#
/*Requirements:Write a program to calculate and output the 
sum of the even numbers from 1 to 100 (inclusive) and the 
sum of odd numbers from 1 to 100 (inclusive).  */
#include<stdio.h>
int main()
{
	int i;
	int sum1 = 0, sum2 = 0;
	
	for(i = 1; i <= 100; i++){
		if (i % 2 == 0){ 
		continue; 
		} 
		sum1 = sum1 + i; 
	}
	printf("sum = %d\n", sum1);
	
	for(i = 1; i <= 100; i++){
		if (i % 2 != 0){ 
		continue; 
		} 
		sum2 = sum2 + i; 
	}
	printf("sum = %d", sum2);
	return 0;
}	
