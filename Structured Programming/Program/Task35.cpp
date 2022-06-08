//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/12 
//Task no: Week11#Task35#
/*Requirements: Write a program to read a sequence of data of integer type 
and then output the data in the reverse order. Array is not allowed to be used.
The total number of the data is inputted by user at the beginning of program 
execution. The memory should be dynamically allocated according to the number 
of data. This is no limit to the total number.*/
#include<stdio.h>
#include<stdlib.h>
struct node{  //Declaration of a node
	int data;
	struct node *next;
};
// Output the data in the reverse order
void reverse(node* pnode1){  // Function declaration 
	if(pnode1 == NULL) 
		return; 
	else{ 
		reverse(pnode1 -> next);  // Recursion
		printf("%d ", pnode1 -> data); 
		return; 
	}
	return; 
}
int main(){
	int n;
	printf("Please enter the number of digits you want to enter:");
	scanf("%d", &n);  // The length of the linklist
	int i = 1;
	struct node *pnode1, *pnode2, *head;  // Create a list
	pnode1 =(struct node*)malloc(sizeof(struct node));
	printf("Please enter these number: ");
	scanf("%d", &pnode1 -> data);
	head = pnode1;  // Create links between nodes
	while (i < n){ 
		pnode2 = (struct node*)malloc(sizeof(struct node));
		scanf("%d", &pnode2 -> data);
		pnode1 -> next = pnode2;
		pnode1 = pnode2;  // Create links between nodes
		i++;
	}
	pnode2 -> next = NULL;
	printf("The reverse order of the sentence is: ");
	reverse(head); // Function call
	return 0;
}



