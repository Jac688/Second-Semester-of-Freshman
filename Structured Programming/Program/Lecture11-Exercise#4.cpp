//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/13 
//Task no: Week9#Lecture11#
/* Requirements:*/
#include<stdio.h>
void exchange(float a[], int n); // function prototype
int main(){
	float value[4] = {2.5, -4.75, 1.2, 3.67};
	exchange(value, 4);
	printf("value[0] = %f", value[0]);
	return 0;
}
void exchange(float a[], int n){
	float temp;
	temp = a[0];
	a[0] = a[n - 1];
	a[n - 1] = temp;
}
/* The output value is value[0] = 3.670000 */

