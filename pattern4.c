#include<stdio.h>
void main()
{
	int i,j;
	int k=65;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}