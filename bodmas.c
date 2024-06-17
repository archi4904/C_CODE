//pointer does not use BODMAS rule for solving the equation but it will execute one by one
#include<stdio.h>
void main()
{
	int a=12,b=4;
	int *p1,*p2;
	int x,y,z;
	p1=&a;
	p2=&b;
	
	x=*p1 * *p2-6;
	y=4* -*p2 / *p1+10;
	
	printf("Address of a=%u\n",p1);
    printf("Address of b=%u\n",p2);
	printf("\n");
	printf("A=%d, B=%d",a,b);
	printf("X=%d, Y=%d",x,y);
	
	*p2 =*p2+3;
	*p1=*p2-5;
	
	z= *p1 * *p2 -6;
	printf("\nA=%d, B=%d",a,b);
	printf("Z=%d",z);
}
	
	
		
	
	l