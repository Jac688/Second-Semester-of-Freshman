//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week1#Task3#
//Requirements: put the output
#include <stdio.h>
int main() 
{
float value1, value2, sum;
value1 = 15;
value2 = 30;
sum = value1 + value2;
printf("The sum of %.1f and %.1f is %.1f\n", value1, value2, sum);
return 0;
}
/*Edit and run this program and see the output:The sum of 15 and 30 is 45
  Change int to float, and check the result again: The sum of 0 and 0 is 0
  Then change three %d into %f, and check the result again.: The sum of 15.000000 and 30.000000 is 45.000000
  Then add .1 between % and f in the first %f, and check the result: The sum of 15.0 and 30.000000 is 45.000000
*/
  
