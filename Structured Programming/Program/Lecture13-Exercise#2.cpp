//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/20 
//Task no: Week10#Lecture13#
/*Requirements: Complete the program statements between the 
comments in the right-hand side to get the results below. 
1st distance
Enter feet: 12
Enter inch: 7.9
2nd distance
Enter feet: 2
Enter inch: 9.8
Sum of distances = 15'-5.7" */
// Program to add two distances (feet-inch)
#include <stdio.h>
struct Distance
{
	int feet;
	float inch;
} dist1, dist2, sum;
int main()
{
	printf("1st distance\n");
	printf("Enter feet: ");
	scanf("%d", &dist1.feet);
	printf("Enter inch: ");
	scanf("%f", &dist1.inch);
	printf("2nd distance\n");
	printf("Enter feet: ");
	scanf("%d", &dist2.feet);
	printf("Enter inch: ");
	scanf("%f", &dist2.inch);
	// adding feet
	sum.feet = dist1.feet + dist2.feet;
	// adding inches
	sum.inch = dist1.inch + dist2.inch;
	// changing to feet if inch is greater than 12
	while (sum.inch >= 12) 
	{
//--please provides your codes here, start--//
//--hint: 1 feet = 12 inch--//
		sum.inch -= 12;
		sum.feet++;
//--please provides your codes here, end--//
	}
	printf("Sum of distances = %d\'-%.1f\"", 
	sum.feet, sum.inch);
	return 0;
}
