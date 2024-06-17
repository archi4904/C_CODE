#include<stdio.h>
#include<string.h>
void main()
{
char line[20],ctr;
int i,c,end=0,character=0,word=0,lines=0;
 
printf("KEY IN THE TEXT\n");
printf("give one space after each word\n");
printf("when complete press return:\n\n");
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
	 		word++;
	 		for(i=0;line[i]!='\0';i++)
	 	     if(line[i]==' ' ||line[i]=='\t')
			  word++;
			}
			
			lines = lines+1;
			character= character+strlen(line);
	}
	
	printf("\n	NUMBER OF LINES = %d\n",lines);
	printf("\n	NUMBER OF WORDS = %d\n",word);
	printf("\n	NUMBER OF CHARACTERS = %d\n",character);
	
 } 	
