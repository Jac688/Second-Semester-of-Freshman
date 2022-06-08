//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/17
//Task no: Week5#Task22#
/*Requirements: Read a line of sentence which has only English letters and spaces.
				This sentence ends with the word "End" (case sentsitive). Please 
				write a program to count the number of words in this sentence 
				(not include "End"). Use scanf and % s to read a word. Assume that 
				the length of each word in the sentence is less than 20.  */
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char s[19];
	printf("Please enter a line of sentence:");
	while(1)
	{
		scanf("%s", s);
		if(strcmp(s, "End") == 0) //sentence ends with the word "End".
			break;
		i++;
	}
	printf("There are %d words in this sentence", i);
	return 0;
}
	/*char s[19];
	int x, i;
	int n = 0;
	printf("Please enter a line of sentence:");
	gets(s);
	for(i=0;;i++)
	{
		x = i;
		if(s[x] =='E')
		{
			if(s[x+1] =='n')
			{
				if(s[x+2] =='d')
					break;
			}
		}
		if(s[i]==' ')
		n++;
	}
	printf("%d\n",n);
	*/
	

