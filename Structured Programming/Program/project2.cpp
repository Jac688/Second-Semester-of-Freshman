//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/5/9 
//Task no: Week12#Project#
/*Requirements: when user has this choice, the system will display a sub-menu
1. Sorted in ID (ascending)
2. Sorted in GPA (descending)
3. Back to main menu  */
#include<stdio.h>
#include<string.h>
void sort();
int menu();
void import();
void dele();
void calcu();
void sort();
struct info
{
	char id[20];
	char name[20];
	char course[10][20];
	char grade[10][4]; 
	float gpa;
	int cnumber;
}

student[10];
int main(){
	while(1){
		if(menu() == 1){
			break;
		}
	}
	return 0;
}

int menu(){
	int i = 0;
	printf("\n\n\t#################################################\n");
	printf("\t*\t\t\t\t\t\t*\n");
	printf("\t*\t\t    menu\t\t\t*\n");
	printf("\t*\t\t\t\t\t\t*\n");
	printf("\t*\t1. Import grades for a course\t\t*\n");
	printf("\t*\t2. Delete a course\t\t\t*\n");
	printf("\t*\t3. Calculate GPA\t\t\t*\n");
	printf("\t*\t4. Export file with GPA\t\t\t*\n");
	printf("\t*\t5. Quit\t\t\t\t\t*\n");
	printf("\t*\t\t\t\t\t\t*\n");
	printf("\t#################################################\n");
	printf("\n");
	printf("Please use the following menu to start:");
	scanf("%d", &i);
	if(i > 5){
		printf("Warning! Please enter a number from 1 to 5.");
	}
	else if(i == 1)
		import();
	else if(i == 2)
		dele();
	else if(i == 3)
		calcu();
	else if(i == 4)
		sort();
	else if(i == 5){
		printf("Thank you for your use, welcome to use it again!\n");
		return 0;
	}
}

void import(){
 int i = 0;
  	FILE * fp,*fp1; 
    if((fp = fopen("students.txt","r")) == NULL) 
		return ;
	while(fscanf(fp, "%s %s", &student[i].name, &student[i].id) == 2){
        i++;
    }
    int j = 0;
    while(j <= 6){
   		printf("%s %s\n",  &student[j].name, &student[j].id);
   		j++;
   	}
    fclose(fp);
    return; 
}
void dele(){
	
}
void calcu(){
	
}
void sort(){
	float t,n = 0;
	int i, j, k;
	char str[20];
    printf("\n\n\t#################################################\n");
	printf("\t*\t\t\t\t\t\t*\n");
	printf("\t*\t1. Sorted in ID (ascending)\t\t*\n");
	printf("\t*\t2. Sorted in GPA (descending)\t\t*\n");
	printf("\t*\t3. Back to main menu\t\t\t*\n");
	printf("\t*\t\t\t\t\t\t*\n");
	printf("\t#################################################\n");
	printf("\nPlease use the options to select the sorting method:");
	scanf("%d", &t);
	if(1 <= t && t <= 3){
		if(t == 1){
			for(k = 0; k <= i - 2; k++){
				for(j = k+1; j <= i - 1; j++)
					if(student[k].id > student[j].id){  // Ascending order
						strcmp(str, student[k].id);
						strcmp(student[k].id, student[j].id);
						strcmp(student[j].id, str);
					}
			}
			FILE * fp,*fp1; 
    		if((fp = fopen("students.txt","w+")) == NULL)
    			return ;
    		int con = 0;
    		while(con <= snumber){
   				printf("%s %s\n",  &student[j].name, &student[j].id);
   				con++;
   	}
		}
		else if(t == 2){
			for(k = 0; k <= i - 2; k++){
				for(j = k+1; j <= i - 1; j++)
					if(student[k].gpa < student[j].gpa){  // Descending order
						n = student[k].gpa;
						student[k].gpa = student[j].gpa;
						student[j].gpa = n;
					}
			}
		}
	}
	else
		return;
}

