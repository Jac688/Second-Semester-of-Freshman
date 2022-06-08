//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/2/19
//Task no: Week1#Task4#
#include <stdio.h>
int main() {
int percentage, x;
char ch1, ch2;
scanf("%d%c%c%d", &percentage, &ch1, &ch2, &x);
printf("%d%% %c%c %d is %f\n", 
percentage, ch1, ch2, x, 1.0 * x * percentage / 100);
return 0;
}
/* Input: -10of100
  Output: -10% of 100 is -10.000000 */
/* Input: -10 of100
  output: -10%  o 1 is -0.100000 */
/* Input: -10 of 100
  Output: -10%  o 1 is -0.100000 */
//Because it reads spaces instead of characters// 


 
