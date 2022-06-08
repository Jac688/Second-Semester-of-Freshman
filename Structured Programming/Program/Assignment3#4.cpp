//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/29 
//Task no: Week11#Assignment3#1 
/*Requirements:  Write a program to read students' names and scores from keyboard and store the information
in an array, then sort them according to scores in descending order and print out the sorted list. 
Assume that there are no more than 20 students. The program must satisfy the following requirements.
a. The program should contain two functions: main, sort.
b. The main function reads information from keyboard, calls the sort function, passes.
information to it for sorting and finally prints out the sorted information.  */
#include<stdio.h>
#include<string.h>

struct information{
	char name[10];
	int score;
}Student[20];

void sort(struct information *Students, int n){
	int j, k, t;
	char s[10];
	for(k = 0; k <= n - 2; k++) // It is relative to 'i' // Sort 
	{
		for(j = k+1; j <= n - 1; j++)
		if(Student[k].score > Student[j].score) // Ascending order about name 
		{ 
			strcpy(s, Student[k].name);
			strcpy(Student[k].name, Student[j].name);
			strcpy(Student[j].name, s);
			t = Student[k].score;
			Student[k].score = Student[j].score;
			Student[j].score = t;
		}
	}
}

int main()
{
	int i;
	printf("Please enter students' names and scores from keyboard:\n");
	for(i = 0; i < 20; i++){
		scanf("%s %d", Student[i].name, &Student[i].score);
		if(Student[i].score == -1)
			break;
	}
	sort(Student, i);

	int a = 0;
	printf("The imformation by sorting them according to scores in descending orderis:\n");
	while(a <= i) {
		printf("%s %d\n", Student[a].name, Student[a].score); // Output one by one 
		a++;
		if(a == i)
			break;
	}
	return 0;
}
