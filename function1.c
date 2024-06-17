//function
#include<stdio.h>
void add()
{
	int a,b;
	printf("ENTER THE NUMBER");
	scanf("%d %d",&a,&b);
	printf("\n ADDITION=%d",a+b);
}
void sub()
{
	
	int a,b;
	printf("ENTER THE NUMBER");
	scanf("%d%d",&a,&b);
	printf("\n SUBTRACT=%d",a-b);
}
void mul()
{
	
	int a,b;
	printf("ENTER THE NUMBER");
	scanf("%d%d",&a,&b);
	printf("\n MULTIPLICATION=%d",a*b);
}
void div()
{
	
	int a,b;
	printf("ENTER THE NUMBER");
	scanf("%d%d",&a,&b);
	printf("\n DIVISION=%d",a/b);
}
void mod()
{
	
	int a,b;
	printf("ENTER THE NUMBER");
	scanf("%d%d",&a,&b);
	printf("\n MODULUS=%d",a%b);
}
int main()
{
	int c;
	printf("ENTER YOUR CHOICE\n 1:ADD\n 2:SUB \n 3:MULTI \n 4:DIV \n 5 MOD");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			add();
			break;
			
		case 2:
			sub();
			break;
			
		case 3:
			mul();
			break;
			
		case 4:
			div();
			break;
			
		case 5:
			mod();
			break;
	}
return 0;
}