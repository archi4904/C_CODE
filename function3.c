//no arguement and return
#include<stdio.h>
int add()
{
	int a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	return a+b;
}
int main()
{
	int c=add();
	printf("ADDITION =%d",c);
	
}