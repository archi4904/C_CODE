// argument with no return
#include<stdio.h>
void factorial(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	printf("Factorial=%d",fact);
}
void factor(int a)
{
	int i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d",i);
		}
	}
	printf("Factor of%d=%d",a,i);
}
void lcm(int a,int b)
{
	int max;
	max=(a>b)?a:b;
	while(1)
	{
		if(max%a==0&&max%b==0)
		{
			printf("lcm=%d",max);
			break;
		}
		max++;

}}
void main()
{
    int a,b,c,d;
	printf("ENTER THE A");
	scanf("%d",&a);
	factorial(a);
	printf("ENTER THE B");
	scanf("%d",&b);
	factor(b);
	printf("ENTER THE C");
	scanf("%d",&c);
	printf("ENTER THE D");
	scanf("%d",&d);
	lcm(c,d);
}