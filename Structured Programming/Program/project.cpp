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
	char Cscore[20], Escore[20];
	float gpa;
} 
student[10];

int main()
{
 while(1)
 {
  if(menu() == 0)
  {
   break;
  }
 }
 return 0;
}

int menu()
{
	int i = 0;
	printf("\t#################################################\n");
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
    printf("please use the following menu to start:");
	scanf("%d", &i);
	if(i > 5)
	{
		printf("Warning! Please enter a number from 1 to 5");
	}
	else if(i == 1)
		import();
    else if(i == 2)
        dele();
    else if(i == 3)
        calcu();
    else if(i == 4)
        sort();
    else if(i == 5)
	{
		printf("Thank you for your use, welcome to use it again!\n");
		return 0;
	}
}

void import()
{
	info student[10];
	char courseName[20];
	char fileName[20];
	char str[2000];
	int a,i,j;
	printf("please input the name of course: ");
	scanf("%s", courseName);
	FILE*fp;
	fp = fopen("students.txt","r");
	while(fgets(str,sizeof(str),fp))
	{
		if(strstr(str,courseName))
		{
			printf("warning£¡the course name exists in students.txt.\n");
			printf("if you want to replace the old grades, input '1', otherwise input '2'\n");
			scanf("%d",&a);
			if(a==1)
			{
				for(i=0;i<9;i++){
				fp=fopen("students.txt","w+");
				scanf("%s",&student[i].Cscore);
				fwrite(&student,sizeof(student),1,fp);
				fclose(fp);
				};
			}
			if(a==2)
			{
				return;
			}
		}
		else
		{
			printf("please give the file name to import: \n");
			scanf("%s",fileName);
			fp=fopen(fileName,"r");
			fread(&student,sizeof(student),1,fp);
			for(j=0;j<9;j++)
			{
			while(fgets(str,sizeof(str),fp))
			{
				if(strstr(str,student[1].id))
				{
					for(i=0 ;i < 9; i++)
					{
						fp=fopen("students.txt","w+");
						scanf("%s",&student[i].Cscore);
						fwrite(&student,sizeof(student),1,fp);
						fclose(fp);
					}
				}
				else
				{
					printf("warning! a student ID in this imported file cannot be found in the students.txt");
				}
				fclose(fp);
		}

	}

	fclose(fp);
		}
	}
}
void dele(){
 
}
void calcu(){
 
}
void sort(){
 
}
