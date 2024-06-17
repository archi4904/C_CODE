
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=4;i>=0;i--)
	{
		k=4;
		for(j=0;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
}