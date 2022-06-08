//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/17
//Task no: Week5#Task19#
/*Requirements: Read a string using ¡°%s¡± in a scanf statement and count 
            	the number of character ¡®a¡¯ in that string. Assume that 
				the total number of characters in the string will not exceed 
				49 and the string has no spaces.   */
#include<stdio.h>
int main()
{
	char s[49];
	int i = 0, n = 0;
	printf("Please use enter after input:");
	scanf("%s", s);
	while (s[i] != '\0' ) // The end of string is s[\0] 
	{
		if(s[i] == 'a')
		n++;              // When scan 'a', count: +1
		i++;
	}
	printf("%d", n);
	return 0;
}
