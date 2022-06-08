//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/3/3
//Task no: Week3#Task7#
/*Requirements: check your output with computer.
Put your output as a comment in the end of the program an
d explain the use of %7d and %-7d.*/ 
#include <stdio.h>
int main ()
{
	int x = 30, y = 30;
	int temp1, temp2, temp3;
	temp1 = x/++y; 
	// ++y = y+1 = 31 // 
	printf("temp1= %d\ty= %d\n", temp1, y);
	temp2 = x/++y ;
	// ++y = y+1 = 31 //
	printf("temp2= %-7d\ty= %d\n", temp2, y);
	y=30;
	temp3 = x/y++;
	// y++ = y =30 // 
	printf("temp3= %7d\ty= %d\n", temp3, y);
	return 0;
}
/* The outtput is  temp1= 0        y= 31
				   temp2= 0        y= 32
				   temp3=       1  y= 31
*/
// the 7 and -7 decide the position/width of the output characters//
// 7: hs six spaces in front; -7 has six spaces at the back//
