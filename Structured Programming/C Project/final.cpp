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
student[2000];

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
	printf("\n\t#################################################\n");
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
    printf("please use the following menu to start(1/2/3/4/5):");
	scanf("%d", &i);  
	// Select from the main menu 
	if(i > 5)
	{
		printf("Warning! Please enter a number from 1 to 5!");
	}
	else if(i == 1)
		import(); // Function call to import course and grade
    else if(i == 2)
        dele();  // Function call to delete course and grade
		
    else if(i == 3)
        calcu(); // Function call to calculate the GPA
    else if(i == 4)
        sort();  // Function call to sort and export
    else if(i == 5)
	{
		printf("Thank you for your use, welcome to use it again!\n");
		return 0;
	}
}

void import()
{
	char courseName[20];
	char fileName[20];
	char studentID[20][15];
	char Name[10];
	char id[20];
	char grade[40];
	int snumber=0;
	int inumber=0;
	int courseinput=student[0].cnumber;
	int a,b,i,j,k,l;
	printf("please input the course name:");
	scanf("%s", courseName);//input the courseName
	FILE*fp;
	fp=fopen("students.txt","r");//open students.txt to read
	fscanf(fp,"%s\t\t%s\n",student[snumber].name,student[snumber].id);
	while(fscanf(fp,"%s\t\t%s\n",student[snumber].name,student[snumber].id)!=EOF) 
	{
		student[snumber].cnumber=0;
		snumber++;//read the file student.txt to the end,input the students name and id from students.txt to the struct
	}//and let know how many students.
	fclose(fp);
	//close students.txt
	for(i=0; i<student[0].cnumber; i++)
	{
		if(strcmp(student[0].course[i],courseName)==0) 
		{
			printf("warning!The course name exists in students.txt.\n");
			printf("if you want to replace the old grades,input '1',otherwise input '2'");
			scanf("%d",&a);//use strcmp to know if the string[courseName]inputted is different from courseName in students.txt
			//so that we know if the courseName exists.
			if(a==2)
				{
					return;//if user choose 2,the program should return to the menu
			}
			else 
			{
				courseinput=i;//courseinput is the number of course inputted
			}
		}
	}
	printf("Please input the file name:");
	scanf("%s",fileName);
	 
	fscanf(dst,"%s\t\t%s\t\t%s\n",Name,studentID[inumber],grade);
	while(fscanf(dst, "%s\t\t%s\t\t%s\n", Name, studentID[inumber], grade) != EOF){
		inumber++;
	}//read the course file to the end,let know the student id in the course file
	fclose(dst);
	//close the course file
	for(l=0; l<inumber; l++) 
	{
		b=0;
		for(j=0; j<snumber; j++)
		{
			if(strcmp(studentID[l],student[j].id)==0) 
			{
				b=1;
				break;
			}
		}//use strcmp to know if the string[students id]read is different from ID in students.txt
		//so that we know if the student id can be found.
		if(b==0)
		{
			printf("warning!A student's id does not exists in students.txt.\n");
			return;//if some students' id cannot be found in students.txt,the program should return to the menu
		}
	}
	FILE*src;
	src=fopen(fileName,"r");//if all the students' id can be found in student.txt,open the course file to read
	fscanf(src,"%s\t\t%s\t\t%s\n",Name,id,grade);
	while(fscanf(src,"%s\t\t%s\t\t%s\n",Name,id,grade)!=EOF) 
	{
		for(k=0; k<snumber; k++)
		{
			if(strcmp(student[k].id,id)==0) 
			{
				strcpy(student[k].course[courseinput],courseName);
				strcpy(student[k].grade[courseinput],grade);
				if(courseinput==student[k].cnumber){
					student[k].cnumber++;
				}
			}//use strcpy to import the course file's data to the students.txt one by one by struct until the file is end
		}
	}
	fclose(src);//close the course file
	printf("succeess! there are %d students in student.txt\n",snumber);
	//let user know how many students had been imported in students.txt
	printf("please input 2 to delete course or input 3 to calculate GPA.\n\n");
	//give the user a instruction
	snumber = 0; 
}

void dele(){
	int a = 0, b = 0;
	int snumber;
	printf("Please enter the number of student and course: ");
	scanf("%d %d", &snumber, &student[0].cnumber);   //get the number of students and project
	char courseName[20]; 
	L:printf("Please input the name of class you want to delete:");
	scanf("%s",courseName);//get the class name the user want to delete
	for(int n = 0; n < student[0].cnumber;n++){//traverse
		if(strcmp(courseName,student[0].course[n])==0){
			printf("The course exists.\n");
			break;
		}
		else if(n == student[0].cnumber){
			printf("Warning:the course doesn't exist.\n");
			goto L;//ask user to input again
		}
		a++;//Find out which column should be deleted
	}
	int m , p;
	for(m = a; m < student[0].cnumber; m++)
		strcpy(student[0].course[m], student[0].course[m+1]);
	for(b = 0; b < snumber; b++)	
		for(p = a; p<student[0].cnumber; p++){
		strcpy(student[b].grade[p], student[b].grade[p+1]);
	}
		printf("Delete successfully.");
}

void calcu(){
	int i, j, k;
	float n, sum;
	int snumber;
	printf("Please enter the number of student and course: ");
	scanf("%d %d", &snumber, &student[0].cnumber);
	for(i = 0; i <= snumber; i++){ // Iterate all of the students
		sum = 0;
		for(j = 0, n = 0; j < student[0].cnumber; j++){  // Iterate all course's grades
			if(strcmp(student[i].grade[j], "A") == 0)  // There are 10 cases of grades
				n = 4;
			else if(strcmp(student[i].grade[j], "A-") == 0)
				n = 3.67;
			else if(strcmp(student[i].grade[j], "B+") == 0)
				n = 3.33;
			else if(strcmp(student[i].grade[j], "B") == 0)
				n = 3;
			else if(strcmp(student[i].grade[j], "B-") == 0)
				n = 2.67;
			else if(strcmp(student[i].grade[j], "C+") == 0)
				n = 2.33;
			else if(strcmp(student[i].grade[j], "C") == 0)
				n = 2;
			else if(strcmp(student[i].grade[j], "C-") == 0)
				n = 1.67;
			else if(strcmp(student[i].grade[j], "D") == 0)
				n = 1;
			else
				n = 0;
			sum += n;  // Get the sum of all grade from a student
		}
		student[i].gpa = sum / student[0].cnumber;  // Get the average of the grade and attain the GPA
	}
	printf("Calculate GPA Success!\n");	
}

void sort(){
	float n = 0;
	int t, j, k;
	int x = 0;
	char str1[20];
	char str2[20];
	char str3[10][4];
	int snumber;
	printf("Please enter the number of student and course you want: ");
	scanf("%d %d", &snumber, &student[0].cnumber);
	int i = snumber;
    printf("\n\n\t#################################################\n");
	printf("\t*\t\t\t\t\t\t*\n");
	printf("\t*\t1. Sorted in ID (ascending)\t\t*\n");
	printf("\t*\t2. Sorted in GPA (descending)\t\t*\n");
	printf("\t*\t3. Back to main menu\t\t\t*\n");
	printf("\t*\t\t\t\t\t\t*\n");
	printf("\t#################################################\n");
	printf("\nPlease use the options to select the sorting method:");
	scanf("%d", &t);
	if(t == 1){
		for(k = 0; k <= i - 2; k++){
			for(j = k+1; j <= i - 1; j++)
				if(student[k].id > student[j].id){  // Sort (Ascending order by ID)
					strcmp(str1, student[k].name);
					strcmp(student[k].name, student[j].name);
					strcmp(student[j].name, str1);
					strcmp(str2, student[k].id);
					strcmp(student[k].id, student[j].id);
					strcmp(student[j].id, str2);
					n = student[k].gpa;
					student[k].gpa = student[j].gpa;
					student[j].gpa = n;
					for(x = 0; student[0].cnumber > x; x++){
						strcmp(str3[x], student[k].grade[x]);
						strcmp(student[k].grade[x], student[j].grade[x]);
						strcmp(student[j].grade[x], str3[x]);
					}
				}
		}
	}
	else if(t == 2){
		for(k = 0; k <= i - 2; k++){
			for(j = k+1; j <= i - 1; j++)
				if(student[k].gpa < student[j].gpa){  // Sort (Descending order by GPA)
					strcmp(str1, student[k].name);
					strcmp(student[k].name, student[j].name);
					strcmp(student[j].name, str1);
					strcmp(str2, student[k].id);
					strcmp(student[k].id, student[j].id);
					strcmp(student[j].id, str2);
					n = student[k].gpa;
					student[k].gpa = student[j].gpa;
					student[j].gpa = n;
					for(x = 0; student[0].cnumber > x; x++){  // Iterate all course's grades
						strcmp(str3[x], student[k].grade[x]);
						strcmp(student[k].grade[x], student[j].grade[x]);
						strcmp(student[j].grade[x], str3[x]);
					}
				}
		}
	}
	else{
		return;
		}
		
	FILE * fp;
   	if((fp = fopen("students.txt","w+")) == NULL)
   		return;
   		
   	fprintf(fp, "%s\t\t%s\t\t\t", "Name", "ID");
   	int row1 = 0;
   	while(student[0].cnumber > row1){
   			fprintf(fp, "%s\t\t", student[0].course[row1]);  // Iterate all courses and output courses' name
   			row1++;
		}
	fprintf(fp, "%s\n", "GPA");
   	int col = 0, row2 = 0;
	
	// Starting from the first column, loop and output students' information by column
   	while(col < snumber){
   		fprintf(fp, "%s\t\t%s\t\t", student[col].name, student[col].id);
   		// Starting from the second line, loop and output the all student's grades by row
   		for(row2 = 0; student[0].cnumber > row2; row2++){
   			fprintf(fp, "%s\t\t", student[col].grade[row2]);
   		}
   		fprintf(fp, "%.2f\n", student[col].gpa);
   		col++;
   	}
   	fclose(fp);
	printf("Export successfully!\n");
}

/*
									student[0].course[0]
       				 _________________________________________________
       				|					      ¡ü					 |
					|   Name |   ID   |    English   |     Math		 | ¡ú¡ústudent[0].course[1]
					| ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|		
  student[0].name ¡û|   Tom	 | 19XXX  |	     A		 |		B+		 | ¡ú¡ústudent[0].grade[1]
					| ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ |
					|  Jack	 | 17XXX  |		 B-		 |		B		 |
					| ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ |
  student[2].name ¡û|  Chump | 18XXX  |     C-		 |      F		 | ¡ú¡ústudent[2].grade[1]
					|________________________________________________|
		           		              		¡ý
		             	       		student[2].grade[0]
*/






