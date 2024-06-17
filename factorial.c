#include<stdio.h>
void factorial()
{
	int a,i,fact=1;
	printf("ENTER 1 NUMBER");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
     {
     	fact*=i;
	 }
	 printf("FACTORIAL OF %d=%d",a,fact);
}
int main()
{
	factorial();
}