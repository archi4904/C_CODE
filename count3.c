#include<stdio.h>
#include<string.h>
int main()
{
	char line[20],ctr;
	int i,c,end=0,characters=0,words=0,lines=0;
	
	printf("KEY IN THE TEXT\n");
	printf("GIVE ONE SPACE AFTRE EACH WORD.\n");
	printf("WHEN COMPLETED, PRESS RETURN:\n\n");
	
	while(end==0)
	{
		c=0;
		while((ctr=getchar())!='\n')
			line[c++]=ctr;
			line[c]='\0';
			
			if(line[0]=='\0')
			break;
			else
			{
				words++;
				for(i=0;line[i]!='\0';i++)
					if(line[i]==' ' || line[i]=='\t')
					words++;
			}
			
			lines = lines+1;
			characters= characters+strlen(line);
	}
	
	printf("\n	NUMBER OF LINES = %d\n",lines);
	printf("\n	NUMBER OF WORDS = %d\n",words);
	printf("\n	NUMBER OF CHARACTERS = %d\n",characters);
	
}