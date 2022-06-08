//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/28
//Task no: Week10#Task_30# 
/* Recommend£ºFinish the program according to the requirements in the comments. */
#include<stdio.h>
#include<string.h>
struct Student{
	char str[10];
	int marks;
};
int main()
{
	int values[5] = {2, 4, 6, 8, 22};
	char str[10];  // The score of this str[10] is different from the 'struct  Student' one.
	char *p;
	int n = 0, i;
	struct Student stu[20];
	struct Student *ps;
	strcpy(str, "UVWXYZ");  // char str[10] = "UVWXYZ" 
	p = str;  // p points To the string str[10]. 
	
// print the third element in the array values using three different expressions.
	printf("%d %d %d\n", values[2], *(values + 2), *(&values[2]));
	printf("%c %c\n", str[2], *p + 2); //print third char in str through str and p respectively
	printf("%s, %s\n", str, p); //print str string through str and p respectively
	
	for (i = 0; i < 20; i++) {
		scanf("%s %d", stu[i].str, &stu[i].marks); // read student's name and marks
		if (stu[i].marks == -1){
			break;
		}
	}
	n = i -1;
	
// with the following two statements, print out the name and marks throught ps
	ps = stu;  // ps points struct Student stu
	printf("first student\'s name:%s, marks:%d\n", ps -> str, ps -> marks); 
	return 0;
} 
	
	
