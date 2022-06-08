//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/21 
//Task no: Week10#Task_29# 
/* Recommend£ºWrite a program to read students¡¯information (name, score and major)
and sort students' information by name in ascending order. Assume that 
the total number of students is inputted from the keyboard but will not 
exceed 50. If you use array to store the information, you need to check 
if the input number is beyond the array upper limit. */
#include<stdio.h>
#include<string.h>
struct information{ 
	char name[20];
	int score;
	char major[10];
} student[50];
int main(){
	int i = 0;
	printf("Please input the number of students (<=50): ");
	while(1){ 
	// The total number of students is inputted will not exceed 50
		scanf("%d", &i);
		if(i <= 50 ){
			printf("Please input students¡¯ information:\n");
			break;
		}
		else{
			printf("Warning: Please input a number which does not exceed 50.\n");
			printf("Input again: ");
		}
	}
	int x = 0; 
	while(1){  // Read students¡¯information (name, score and major) 
		scanf("%s %d %s", student[x].name, &student[x].score, student[x].major);
		x++;
		if(x ==  i)
			break;
	}
	int k, j, t;
	char n[20], s[20];
	for(k = 0; k <= i - 2; k++) // It is relative to 'i' // Sort 
	{
		for(j = k+1; j <= i - 1; j++)
		if(strcmp(student[k].name, student[j].name) > 0)  // Ascending order about name 
		{ 
			strcpy(n, student[k].name);
			strcpy(student[k].name, student[j].name);
			strcpy(student[j].name, n);
			t = student[k].score;
			student[k].score = student[j].score;
			student[j].score = t;
			strcpy(s, student[k].major);
			strcpy(student[k].major, student[j].major);
			strcpy(student[j].major, s);
		}
	}
	printf("The student list in ascending order by name is:\n");
	int a = 0;
	while(a < i) {
		printf("%s %d %s\n", student[a].name, student[a].score, student[a].major); // Output one by one 
		a++;
		if(a == i)
			break;
	}
	return 0;
}
