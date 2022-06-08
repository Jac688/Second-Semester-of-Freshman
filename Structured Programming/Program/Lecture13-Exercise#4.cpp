//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/20 
//Task no: Week10#Lecture13#
/*Requirements: 1. Write code to declare the structures for:
¨C Point
¨C Line
¨C Triangle
2. Write code to calculate
- Length of the Line */
#include<stdio.h>
#include<math.h>
struct point{ 
	double x, y;
} p1;


struct line{
	struct point p2, p3;
} l;


struct triangle{ 
	struct point p4, p5, p6;
} t;
int main(){
	printf("Point:\nPlease enter the value in x coordinate and y coordinate:"); // Point
	scanf("%lf %lf", &p1.x, &p1.y);  // Read one point
	printf("The point is (%.1f, %.1f).\n", p1.x, p1.y);
	
	// Use Nested Structures
	printf("Line:\nPlease enter the first point:");  // Line
	scanf("%lf %lf", &l.p2.x, &l.p2.y); // Read two points
	printf("Please enter the secord point:");
	scanf("%lf %lf", &l.p3.x, &l.p3.y);
	printf("This line crosses the points (%.1f,%.1f), (%.1f,%.1f).\n", l.p2.x, l.p2.y, l.p3.x, l.p3.y); 
	double len;
	len = sqrt((l.p3.x - l.p2.x)*(l.p3.x - l.p2.x) + (l.p3.y - l.p2.y)*(l.p3.y - l.p2.y));
	printf("The length of the Line is %f\n", len);
	
	// Use Nested Structures
	printf("Triangle:\nPlease enter the first point:");// Triangle
	scanf("%lf %lf", &t.p4.x, &t.p4.y); // Read three points
	printf("Triangle:\nPlease enter the secord point:");
	scanf("%lf %lf", &t.p5.x, &t.p5.y);
	printf("Triangle:\nPlease enter the third point:");
	scanf("%lf %lf", &t.p6.x, &t.p6.y);
	printf("The three points of the triangle is (%.1f,%.1f), (%.1f,%.1f), (%.1f,%.1f).\n", t.p4.x, t.p4.y, t.p5.x, t.p5.y, t.p6.x, t.p6.y);
	return 0;
} 

