#define ITEMS  5
#define MAXCHAR  20
#include<stdio.h>
#include<string.h>
void main()
{
	char strg[ITEMS][MAXCHAR],dummy[MAXCHAR];
	int i=0,j=0;
	printf("ENTER THE NAME%d ITEMS \n",ITEMS);
	while(i<ITEMS)
	
		scanf("%s",strg[i++]);
		for(i=1;i<ITEMS;i++)
		{
			for(j=1;j<=ITEMS-i;j++)
			{
				if(strcmp(strg[j-1],strg[j])>0)
				{
					strcpy(dummy,strg[j-1]);
					strcpy(strg[j-1],strg[j]);
					strcpy(strg[j],dummy);
				}
			}
		}
	
	printf("\nAlphabetical list\n\n");
	for(i=0;i<ITEMS;i++)
	printf("%s ",strg[i]);
}