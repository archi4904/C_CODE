#include<stdio.h>
void main()
{
	int count=0,sp=0,i;
	char s[200];
	printf("enter the string \n");
	scanf("%[^\n]s",s);
	printf("\n\n");

	 for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
        count++;    
    }
        printf("Number of words in given string are: %d\n", count + 1);
    
    for (i = 0;s[i] != '\0';i++)
    {
		if(s[i]>=33 &&s[i]<=47 || s[i]>=58 &&s[i]<=64 || s[i]>=91 &&s[i]<=96 ||s[i]>=123 &&s[i]<=126)
		sp++;
	}
	printf("Number of special character in given string are: %d\n", sp);
	printf("\n");
}