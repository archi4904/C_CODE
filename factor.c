#include<stdio.h>
void main()
{
	int a,i;
	printf("ENTER THE NUMEBR");
	scanf("%d",&a);
printf("FACTOR OF THE %d",a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		printf("%d ",i);
		}
	}

}