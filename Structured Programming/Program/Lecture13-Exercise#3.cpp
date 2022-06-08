//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/20 
//Task no: Week10#Lecture13#
/*Requirements: Can you define a struct called point which has x
coordinate and y coordinate? Give three ways of declaration.
If the point is at (10, 3), how to assign that? */
#include<stdio.h>
// First way
struct Point{
	float x;
	float y;
}value;
/* Secord way 
 
struct Point{
	float x;
	float y;
};
struct Point value;
*************************************/
/* Third way

typedef struct{
	float x;
	float y;
} point;
point value; */
int main(){
	value.x = 10;
	value.y = 3;
	printf("(%.1f, %.1f)", value.x, value.y);
	return 0;
}


