#include<stdio.h>
#include<stdlib.h>
int main()
{ 
	char names[2][8] = {"Frans", "Coenen"}; 
	printf("names = %s, %s\n",names[0],names[1]); 
	printf("names = %s\n", names); 
	printf("Initials = %c.%c.\n",names[0][0],names[1][0]);
}
