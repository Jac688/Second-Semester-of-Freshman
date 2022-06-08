//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/3
//Task no: Week3#Task12#
/*Requirements: Write a program for 
the following control flow diagram.*/ 
#include <stdio.h>
int main ()
{
	float height, weight;
	printf("enter the height(cm) and weight(kilo):");
	scanf("%f %f", &height, &weight);
	
	if(height - 5 > weight+20) 
	{
		printf("You are too slim");
	}else if(weight-10 < height-105 && height-105 <= weight+20)
	    /* && means "and", two inequalities
	       should be writen separately*/
		{
			printf("You are fit");
		}else
		{
			printf("You are too fit");
		}
	return 0; 
} 
