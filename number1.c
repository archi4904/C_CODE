#include<stdio.h>
void main()
{
	int n=1,num,sum=0;
	while(n<=10)
	{
		printf("ENTER THE NUMBER");
		scanf("%d",&num);
		if(num<0)
		{
		continue;
		}
		sum+=num;
		n++;
		
  }
		printf("SUM:%d",sum);
}