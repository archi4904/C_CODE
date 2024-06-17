#include<stdio.h>
void main()
{
	int sci,math,eng,ss,hindi;
	printf("enter 5 subject marks");
	scanf("%d%d%d%d%d",&sci,&math,&eng,&ss,&hindi);
	printf("SCIENCE=%d \n MATH=%d \n ENGLSIH=%d \n SOCIAL STUDIES=%d \n HINDI=%d",sci,math,eng,ss,hindi);
	int TOTAL=sci+math+eng+ss+hindi;
	printf("\n TOTAL=%d",TOTAL);
	float PERCENTAGE=(TOTAL*100)/500;
	printf("\n PERCENTAGE=%f",PERCENTAGE);

if(PERCENTAGE<=100 && PERCENTAGE>=90)
{
	printf("outstanding");
}
else if(PERCENTAGE<=90 && PERCENTAGE>=70)
{
	printf("excellent");	
}
else if(PERCENTAGE<=70 && PERCENTAGE>=50)
{
		printf("very good");
}
else if(PERCENTAGE<=50 && PERCENTAGE>=35)
{
		printf("good");
}
else
{
	printf("fail");
}
}
