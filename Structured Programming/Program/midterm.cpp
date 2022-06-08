#include<stdio.h>
void printPattern(char, int);
int main()
{
	int i, i2;
	char c;
	printf("Please input an ASCII code of an English letter in lower case ('a'-'z'):");
	while(1)
	{
		scanf("%d", &i);
		if(i >= 97 && i <= 122){
			c = i;
			printf("The English letter to this code is: %c\n", c);
			break;
		}
		else
			printf("Wrong input! Please input again:");
	}

	int col, row, l;
	printf("How many lines do you want to print in a pattern:");
	scanf("%d", &l);
	printPattern(c, l);
	
	int n = 0, i1;
	char s[27];
	if(i>107){
		for(i1=i;  i1<=122; i1++){
			s[n]= i1;
			n++;
		}
		for(i1=97; i1<=107; i1++){
			s[n] = i1;
			n++;
		}
	}
	else if(i<107){
		for(i1=i;i1<=107;i1++){
			s[n] = i1;
			n++;
		}
	}
	else{
		s[n]= 107;
		n++;
	}
	s[n]='\0';
	printf("The generated string is: %s\n", s);
		
	int j, k, m;
	for(k = 0; k <= n - 2; k++){
		for(j = k+1; j <= n-1; j++)
			if(s[k] < s[j]){
				m = s[k];
				s[k] = s[j];
				s[j] = m;
			}
    }
	printf("The sorted chars in decending order is:");
	printf("%s", s);
	
	int sum=0;
	n = 0;
	while(s[n]!='\0'){
	sum += int(s[n]);
	n++;
	}	
	printf("The sum of ASCII code is: %d",sum);
	
	return 0;
}
void printPattern(char c, int l){
	int col, row;
	for(col = 1;col <= l; col++){
		for(row = 1; row <= l; row++){
			if(row < col)
				printf(" ");
			else
				printf("%c", c);
		}	
	printf("\n");
	}
}
