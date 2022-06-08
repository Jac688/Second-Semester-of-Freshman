#include<stdio.h>
int main()
{
int	sum = 0;
int i;
for (i = 1; i <= 100; i++){
sum = sum + i; 
if (sum >= 1000)
break; 
}
printf("i = %d, sum = %d", i, sum);
}
 
