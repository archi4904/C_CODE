#include<stdio.h>
void main()
{
	int a=1,n;
	printf("enter a number whose table you want to print:");
	scanf("%d",&n);
	table:
		printf("%d x %d = %d \n",n,a,n*a);
		a++;
		if(a<=10)
		goto table;
}