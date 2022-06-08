// Programmer: Jack
// Student ID: 1930026143
// Date: 7th April 2020

#include<stdio.h>
#include<string.h>


int calcSum(char str[]) //Step 2
{
	int sum = 0;
	int n = 0;
	//Please provide your codes here
	while(n<7){
		sum += int(str[n]);
		n++;
	}
	return sum;
}

void printPattern(char str[], int num_pattern) //Step 3
{
	//Please provide your codes here
	char c; 
	int n;
	int col, row;
	for(n=0;str[n]!= '\0'; n++){
		str[n];
		if(((int)str[n]<= 122 && (int)str[n]>=97) || ((int)str[n]<= 90 && (int)str[n]>=65)){
			c = str[n];
			break;
		}
	}
	for(row = 1; row <= num_pattern; row++)
	{
		for(col = 1; col <= 2 * row - 1; col++)
			printf("%c", c);
		printf("\n");
	}
}

void sort(char str[], int n) //Step 5
{
	//Please provide your codes here
	int j, k, m;
	for(k = 0; k <= n - 2; k++){
		for(j = k+1; j <= n-1; j++)
			if(str[k] < str[j]){
				m = str[k];
				str[k] = str[j];
				str[j] = m;
			}
    }
	printf("The descending order is:%s\n",str);
}


int main()
{
	
	//*******Codes for Step 1 START*******//
	//The following three lines of printf() codes can be used in Step 1.
	char str[25];
	int n = 0, i = 0, x = 0, l =  0;
	printf("Please input a line of characters contained English letters or digits:");
	while(1){
		scanf("%s", str);
		for(n=0;str[n]!= '\0'; n++){
			if((int)str[n]<= 57 && (int)str[n]>=48)
				i=i+1;
			if((int)str[n]<= 122 && (int)str[n]>=97)
				x=x+1;
			if((int)str[n]<= 90 && (int)str[n]>=65)
				l=l+1;
		}
		if(i>=2&&x+l>=2){
			printf("The inputted line of characters are %s\n", str);
			break;
		}
		else
			printf("At least two characters and at least two digits are required\n");
	}
	//The following three lines of printf() codes can be used in Step 1.
	//printf("Please input a line of characters contained English letters or digits:");
	//printf("At least two characters and at least two digits are required\n");
	//printf("The inputted line of characters are %s\n", str);

	//Please provide your codes here
	

	//*******Codes for Step 1 END*******//



	//*******Codes for Step 2 START*******//
	//The following printf() codes can be used here.
	//printf("The sum of ASCII numbers is %d\n", sum);

	//Please call calcSum() here and provide other necessary codes.
	int sum=0;
	n = 0;
	sum = calcSum( str);
	printf("The sum of ASCII code is: %d\n",sum);
	//*******Codes for Step 2 END*******//



	//*******Codes for Step 3 START*******//

	//Please call printPattern() here and provide other necessary codes.
	int t;
	printf("please indicate the lines of the pattern:");
	scanf("%d", &t);
	printPattern(str, t);
	//*******Codes for Step 3 END*******//



	//*******Codes for Step 4 START*******//
	//The following printf() codes can be used here.
	//printf("The extracted digits are:%s\n",str_ext);
	//printf("The number of extracted digits is:%d\n",ext_num);

	//Please provide your codes here
	char str_ext[25];
	int count=0, n1 = 0;
	for(n=0;str[n]!= '\0'; n++){
		if((int)str[n]<= 57 && (int)str[n]>=48){
			count= count+1;
			str_ext[n1] = str[n]; 
			n1++;
		}
	}
	str_ext[n1] = '\0';
	int ext_num = count;
	printf("The extracted digits are:%s\n",str_ext);
	printf("The number of extracted digits is:%d\n", ext_num);

	//*******Codes for Step 4 END*******//



	//*******Codes for Step 5 START*******//
	//The following printf() codes can be used here.
	//printf("The ascending order is:%s\n",str_ext);
	//Please call sort() here and provide other necessary codes.

	sort(str_ext, n1);
	
	//*******Codes for Step 5 END*******//


}

