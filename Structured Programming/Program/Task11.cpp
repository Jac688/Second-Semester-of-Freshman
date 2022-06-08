//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/3
//Task no: Week3#Task11#
/* Requirements: read an amount of Euro dollars and change
to HK dollar or RMB. Please output the amount of HK dollar 
or RMB depending on the choice. Assume the exchange rate 
between Euro dollar and HK dollar is 8.1, between Euro dollar 
and RMB is 7.2. Please choose proper data type and decimal 
places. */ 
#include <stdio.h>
int main ()
{
	int a;
	float Euro, HK, RMB; //input amount should be float // 
	printf("Please input amount in Euro:");
	scanf("%f", &Euro);
	
	printf("Please choose the currency converting to (1: HK dollar, 2: RMB):");
	scanf("%d", &a);
	
    if(a == 1) // Here should be "==" but not "=" // 
		{
			HK = 8.1 * Euro; 
			printf("%.2f Euro = %.2f HK dollar", Euro, HK);
    	}   
	else if(a == 2)
    	{
			RMB = 7.2 * Euro;
    		printf("%.2f Euro = %.2f RMB", Euro, RMB);
		}   // choose proper decimal places(.2) //
}
