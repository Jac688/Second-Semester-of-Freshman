//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/25
//Task no: Week6#Task24#
/*Requirements: Find and print out the
  biggest value in the array value  */
#include<stdio.h>
float exchange(float a[], int n); // function prototype
int main()
{
    float f; 
	float value[4] = {2.5, 1, 1.2, 5.2}; 
	f = exchange(value, 4); //define int n = 4
	printf("biggest = %.1f", f);
	return 0;
}
float exchange(float a[], int n){
	float temp; 
	while(n > 0){ // Select the biggest one 
		if(a[n-1] > a[0]){
			temp = a[0];
    		a[0] = a[n -1];
			a[n-1] = a[0];
		}
		n--;
	}
	return a[0]; //return the biggest one
}
