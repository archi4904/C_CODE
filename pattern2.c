#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==0 || i==4 || j==0 || j==i)
			{
			printf("%d ",i)	;
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}
