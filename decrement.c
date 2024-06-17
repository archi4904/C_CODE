#include<stdio.h>
int main()
{
	int x=3;
	int d;
	d=x++ + ++x + x++ + ++x;
	printf("Value of x=%d",d);
	return 0;
}
