//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/29 
//Task no: Week11#Assignment3#1 
/*Requirements: Run the program on the next page. Think about 
the following questions and put the answers to the questions 
as the comments at the end of the program. */
#include <stdio.h>
#include <stdlib.h>
struct stuRec{
	char name[20];
	int id; 
	char gender;
};
int main()
{
	struct stuRec *p;
	p = (struct stuRec*)malloc(sizeof(struct stuRec));
	if (p){
		printf("please input name, id and gender\n");
		scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
		printf("name:%-10s,ID:%d,gender:%c\n", p->name,p->id,p->gender);
	free (p);
	}
	return 0;
}
/*
1. Q: What is this program supposed to do?
   A: Read the information you entered including name, id, gender and print it out.
   
2. Q: Is the memory dynamically allocated or statically allocated
   A: The memory is dynamically allocated.  *malloc(long size) is one of  basic functions about dynamic Memory Allocation.
   
3. Q: What is %*c used for?
   A: %*c is used to ignore the newline space or other special characters.
      Read a character empty, and it will not be assigned to a variable.
      
4. Q: .If %-10s is changed to %10s, what happened?
   A: There are will be some space in the left of the name and the length of all is 10.
   
5. Q: Why do we need to add free(p)?
   A: This can free up the memory, and the memory can be used by others.
*/
