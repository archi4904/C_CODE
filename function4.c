//arguement and return
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	printf("\n ADD=%d",add(a,b));
	int c=add(a,b);
	printf("ADDITION =%d",c);
	
}