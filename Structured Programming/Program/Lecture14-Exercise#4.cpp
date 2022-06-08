//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/27 
//Task no: Week10#Lecture14#
/*Requirements: Show the output. */
#include<stdio.h>
int main()
{
	int a = 3;
	char s = 'z';
	double d = 1.03;
	int *pa = &a;  // pa points to int a
	char *ps = &s;  // ps points to char s
	double *pd = &d;  // pd points to double d
	printf("%d %d %d\n", sizeof(pa), sizeof(*pa), sizeof(&pa));  // sizeof(pa) == sizeof(&pa) 
	printf("%d %d %d\n", sizeof(ps), sizeof(*ps), sizeof(&ps));  // sizeof(ps) == sizeof(&ps) 
	printf("%d %d %d\n", sizeof(pd), sizeof(*pd), sizeof(&pd));  // sizeof(pd) == sizeof(&pd) 
	return 0;
}
/* Output is:
   8 4 8
   8 1 8
   8 8 8
*/
