//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/18 
//Task no: Week13#Assignment4#1
/*Requirements: Write a program to read students' names and scores from a file student.txt, and store the 
students' information in a linked list where the elements are stored in descending order. The program then 
will print out the students¡¯ information in the linked list from the head to the end. For example, if the 
information in the file is as follows (Note: there is no limit to the number of students):
Jack 10
Ray 100
David 12 */
#include<stdio.h>
#include<stdlib.h>
struct node{
	char name[20];
	int score;
	struct node *next;
};
int main(){
	int n;
	printf("Please enter the number of student you want to enter:");
	scanf("%d", &n);  // The length of the linklist
	int i = 1;
	FILE *fp;
	fp = fopen("student.txt", "r");
	struct node *pnode1, *pnode2, *head;  // Create a list
	pnode1 =(struct node*)malloc(sizeof(struct node));
	fscanf(fp, "%s %d", pnode1 -> name, &pnode1 ->score);
	head = pnode1;  // Create links between nodes
	while (i < n){
		pnode2 = (struct node*)malloc(sizeof(struct node));
		fscanf(fp, "%s %d", pnode2 -> name, &pnode2 ->score);
		pnode1 -> next = pnode2;
		pnode1 = pnode2;  // Create links between nodes
		i++;
	}
	pnode2 -> next = NULL;
	fclose(fp);
	
	printf("The students' information are:\n ");
	while (pnode1 == NULL)  
		{
			pnode1 = pnode1 -> next;
			printf("%s  %d\n", pnode1 -> name, pnode1 -> score);
		}


	return 0;
}


