//Progframmer: Jack
//Student ID: 1930026143
//Date: 2020/4/13 
//Task no: Week9#Lecture12#
/* Requirements: Can we can solve the following questions with recursive 
functions? If yes, please give the base case and recursive step. */
/*
- 1.
 #include <stdio.h> 
#include <stdlib.h>
int i;
int sum(int *a,int n)
{
	int t;
	if(n==0)
 		return 0;
	else
 	{
  		t=sum(&a[n-1],n-1);
  		i=i+a[n-1];
	}
    return i;
}
int main ()
{
	int i;
	int a[20];
	printf("please enter an array:");
	for(i=0;i<=20;i++)
	{
  		scanf("%d",&a[i]);
 	}
 	printf("\n");
 	printf("%d",sum(&a[0],20));
    return 0; 
}

- 2.
#include <stdio.h>
void sort(int a[],int l);
int main()
{
	int a[20],i=0,l;
	while(scanf("%d",&a[i])==1)
	{
		i++;
	}
	l=i;
	sort(a,l);
	for(i=0;i<l;i++)
	{
		if(i==0)
			printf("%d",a[i]);
		else
			printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
void sort(int a[],int l)
{
	int k£» 
	for(k = 0; k <= i - 2; k++) // it is relative to 'i'
	{
		for(j = k+1; j <= i - 1; j++)
			if(a[k] < a[j])  // descending order
			{ 
				n = a[k];
				a[k] = a[j];
				a[j] = n;
			}
	}	
}



- 3.
#include<stdio.h>
void fun(int c, int r) // Assume n >= 0 
{
	if(c==1 && r==5)
    {
        printf("*");
    }
    else
    {
        if(r==5)
        {
            fun(c-1, c-1);
        }
        else
        {
            fun(c, r+1);
        }
        printf("*");
        if(c==r)
            printf("\n");
    }
}
int main()
{
    fun(5,1);
    return 0;
}
*/ 
