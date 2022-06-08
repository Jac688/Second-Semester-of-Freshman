//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week1#Task2#
//Requirements: sizeof()  
#include<stdio.h>
int main()
{
short int s;
char c; 
double d;
float f; 
long int l;
int i;
printf("Number of bytes used to store a short int type variable is %d\n", sizeof(short int));
printf("Number of bytes used to store a char type variable is %d\n", sizeof(char));
printf("Number of bytes used to store a double type variable is %d\n", sizeof(double));
printf("Number of bytes used to store a float type variable is %d\n", sizeof(float));
printf("Number of bytes used to store a long int type variable is %d\n", sizeof(long int));
printf("Number of bytes used to store an int type variable is %d\n", sizeof(int));
return 0;
}
/* Number of bytes used to store a short int type variable is 2
   Number of bytes used to store a char type variable is 1
   Number of bytes used to store a double type variable is 8
   Number of bytes used to store a float type variable is 4
   Number of bytes used to store a long int type variable is 4
   Number of bytes used to store an int type variable is 4 */


