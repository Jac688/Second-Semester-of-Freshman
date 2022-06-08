#include<stdio.h>
int main()
{
	int n, i;
	int x = 0;
	scanf("%d", &n);
	while(n>0){
		i= n%10;
		x= x*10 +i;
		n/=10;
	}
	printf("%d\n",x);
	n = x;
	int t;
	while(n > 0){
		t = n % 10;
		printf("%d ", t);
		n/=10;
	}
	return 0;
} 
