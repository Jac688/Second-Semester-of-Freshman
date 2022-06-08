//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/20 
//Task no: Week10#Lecture13#
/*Requirements: Complete the program statements between the 
comments in the right-hand side to get the results below. */
/* Structure Example - Employee */
#include <stdio.h> 
#include <string.h> 
struct Employee 
{
	int Empolyee_ID;
	int age; 
	char Name[50];
	char Department[20];
	float Salary;
};
int main() 
{
	struct Employee emp1 = {101, 25, "Dave", "IT", 25000.50};
	struct Employee emp2;
	emp2.Empolyee_ID = 102;
	emp2.age = 28; 
//--please provides your codes here, start--//	
	strcpy(emp2.Name,"Christofer");    // Use strcpy function to assign to Name and Department
	strcpy(emp2.Department,"Science");
	emp2.Salary = 32000.70;
//--please provides your codes here, end--//
	printf(" Details of the Employee1 \n " );
	printf(" Employee Id = %d \n ", emp1.Empolyee_ID );
	printf(" Employee Age = %d \n ", emp1.age );
	printf(" Employee Name = %s \n ", emp1.Name );
	printf(" Employee Department = %s \n ", emp1.Department );
	printf(" Employee Salary = %.2f \n\n ", emp1.Salary );
	printf(" Details of the Employee2 \n " );
	printf(" Employee Id = %d \n ", emp2.Empolyee_ID );
	printf(" Employee Age = %d \n ", emp2.age );
	printf(" Employee Name = %s \n ", emp2.Name );
	printf(" Employee Department = %s \n ", emp2.Department );
	printf(" Employee Salary = %.2f \n ", emp2.Salary );
	return 0;
}
