#include<stdio.h>
int main()
{
	int a=3,b=6,c=8;
	int d=(a<b&&a<c);
	int e=(a>b&&a>c);
	int f= !(a>b&&a>c);
	int g=(b<c&&b>a);
	printf("%d %d %d %d",d,e,f,g);
	
	
	int h=(a<b||a<c);
	int i=(a>b||a>c);
	int j= !(a>b||a>c);
	int k=(b<c||b>a);
	printf("%d %d %d %d",h,i,j,k);
	


	int l=!(a<b||a<c);
	int m=!(a>b||a>c);
	int n= !(a>b||a>c);
	int o=!(b<c||b>a);
	printf("%d %d %d %d",l,m,n,o);	
	return 0;
}