#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,h;
	printf("enter the 2 numbr");
	scanf("%d %d",&a,&b);
	a+=b;

	printf("sum=%d\n",a);
 a-=b;	
		printf("sub=%d",a);
a*=b;
		printf("prod=%d",a);
a/=b;
		printf("quo=%d",a);
a%=b;
		printf("rem=%d",a);		
return 0;
}