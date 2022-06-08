//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/17
//Task no: Week5#Task19#
/*Requirements: The line is read character by character (i.e., use %c in
				scanf statement to read one character and looping to 
				repeat reading character until the end of the line) */
#include<stdio.h>
int main()
{
	int n = 0;
	char c;
	printf("Please use enter after input:\n");
	scanf("%c", &c);
	while(c != '\n')  //The line ends with ENTER key //
	{
	
		if (c == 'a')
		n++;
    }
    printf("%d", n);
    return 0;
}
