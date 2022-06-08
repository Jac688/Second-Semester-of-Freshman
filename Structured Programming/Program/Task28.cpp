//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/21 
//Task no: Week10#Task_28# 
/* Recommend£º Declare structures Point, Line and Triangle (refer to the lecture)
and define the point, line and triangle in the following picture.
Calculate the length of the line and the perimeter of the triangle */
#include<stdio.h>
#include<math.h>
float length(float, float, float, float);  // Function declaration
float perimeter(float, float, float, float, float, float);  // Function declaration
struct point{ 
	float x, y;
} p1;
struct line{
	struct point p2, p3;
} l;
struct triangle{ 
	struct point p4, p5, p6;
} t;
int main(){
	printf("Point:\nPlease enter the value in x coordinate and y coordinate:");  // Point
	scanf("%f %f", &p1.x, &p1.y);  // Read one point
	printf("The point is (%.1f, %.1f).\n", p1.x, p1.y);
	
	// Use Nested Structures
	printf("Line:\nPlease enter the first point:");  // Line
	scanf("%f %f", &l.p2.x, &l.p2.y);  // Read two points
	printf("Please enter the secord point:");
	scanf("%f %f", &l.p3.x, &l.p3.y);
	printf("This line crosses the points (%.1f,%.1f), (%.1f,%.1f).\n", l.p2.x, l.p2.y, l.p3.x, l.p3.y);
	printf("The length of the Line is %f \n", length(l.p2.x, l.p2.y, l.p3.x, l.p3.y));  // Function call
	
	printf("Triangle:\nPlease enter the first point:");  // Triangle
	scanf("%f %f", &t.p4.x, &t.p4.y);  // Read three points
	printf("Please enter the secord point:");
	scanf("%f %f", &t.p5.x, &t.p5.y);
	printf("Please enter the third point:");
	scanf("%f %f", &t.p6.x, &t.p6.y);
	printf("The three points of the triangle is (%.1f,%.1f), (%.1f,%.1f), (%.1f,%.1f).\n", t.p4.x, t.p4.y, t.p5.x, t.p5.y, t.p6.x, t.p6.y);
	printf("The perimeter of the triangle is %f \n", perimeter(t.p4.x, t.p4.y, t.p5.x, t.p5.y, t.p6.x, t.p6.y));  // Function call
	return 0; 
}
float length(float x1, float y1, float x2, float y2){  // Function definition
	float  len;
	len = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return len;
}
float perimeter(float x1, float y1, float x2, float y2, float x3, float y3){  // Function definition
	float per;
	per = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) + (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3) + (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	return per;
}






