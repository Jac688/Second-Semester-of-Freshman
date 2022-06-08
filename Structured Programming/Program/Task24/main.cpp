#include"stringLength.h"
int main()
{
	int i = 0;
	char a[50];
	printf("Please enter a string:");
	scanf("%s", &a);
	while(a[i] != '\0'){
		i++;
    }
    printf("%d",stringLength(a));
	return 0;
} 