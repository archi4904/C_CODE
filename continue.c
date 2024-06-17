#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=50;i++)
	{
		if(i==25)
		continue;
		printf("%d",i);
	}
}