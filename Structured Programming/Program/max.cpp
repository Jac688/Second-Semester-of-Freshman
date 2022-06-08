#include<stdio.h>
int main(){
	int value; // input value
int max = 0; // maximum value
printf("Enter a positive integer (-1 to stop): ");
scanf("%d"
, &value);
while(value != -1){
if(value > max)
max = value;
printf("Enter a positive integer (-1 to stop): ");
scanf("%d", &value);
}
printf("The maximum value is %d", max);
} 
