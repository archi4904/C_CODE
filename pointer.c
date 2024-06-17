//pointer
#include<stdio.h>
void main()
{
	int a=5,b=10;
	int *p,*p1;
	p=&a;
	p1=&b;
	printf("value of a=%d",a);
    printf("address of a=%d",&a);
	printf("value of p=%d",*p);
	printf("adddress of p=%d",p);	
}