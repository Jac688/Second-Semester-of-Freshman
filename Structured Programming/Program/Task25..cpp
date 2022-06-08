//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/14 
//Task no: Week9#Task25#
/*Requirements: Change the following program such that it will find and print out the biggest value in 
the array value  */
#include<stdio.h> 
float exchange(float a[], int n); // function prototype
int main(){
	float value[4] = {2.5, 1, 1.2, 5.2}; 
	exchange(value, 4);
	printf("The biggest value in the array value = %f\n", exchange(value, 4)); // return float max
	printf("%.1f, %.0f, %.1f, %.1f", value[0], value[1], value[2], value[3]); // array value should be SAME as before
	return 0;
}
float exchange(float a[], int n){
	float max;
	max = a[n-1];
	n = n - 2;
	while(n > 0){          // Select the biggest one 
		if(a[n]> max)
		max = a[n];
	n--;
	}
	return max;
}
