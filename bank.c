//structure function
#include<stdio.h>
#include<string.h>
struct bank
{
	char name[30];
	int account_no;
	int balance;
	
};
void create(struct bank b[])
{
	int i;
	for(i=1;i<=2;i++)
	{
		printf("%d CUSTOMER NAME=",i);
		scanf("%s",b[i].name);
	    printf("%d ACCOUNT DETAIL=",i);
		scanf("%d",&b[i].account_no);	
		printf("%d BALANCE=",i);
		scanf("%d",&b[i].balance);
	}
}

void login(struct bank b[])
{
		int i,acc_no;
		int ch,amt;
	printf("ENTER THE LOGIN DETAIL");
	scanf("%d",&acc_no);
	for(i=1;i<=2;i++)
	{
		if(acc_no==b[i].account_no)
		{
			printf("LOGGIN SUCCESSFUL");
			printf("\nENTER NEW CHOICE\n 1:DEPOSITE\n 2:WITHDRAW");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
			    printf("\nENTER THE AMOUNT TO BE DEPOSITED");
			    scanf("%d",&amt);
				b[i].balance+=amt;
				printf("\n CURRENT BALANCE=%d",b[i].balance);
				break;
				
				case 2:
				printf("\nENTER THE AMOUNT TO BE WITHDRAWN");
			    scanf("%d",&amt);
			    if(b[i].balance>amt)
			    {
			    	b[i].balance-=amt;
			    	printf("\n CURRENT BALANCE=%d",b[i].balance);
				}
				else
				{
					printf("\n BALANCE IS NOT SUFFICIENT");
				}
                break;
			}
		}
		else
		{
			printf("ACOUNT DOES NOT FOUND \nCREATE NEW ACCOUNT");
		}
	}
}
int main()
{
	int c;
struct bank b[2];
while(1)
{
printf("ENTER YOUR CHOICE:\n 1:CREATE \n 2:LOGIN");
scanf("%d",&c);
switch(c)
{
	case 1:
	create(b);
	break;
	case 2:
	login(b);
	break;	
	case 3:
	printf("EXIT");
	break;
}
}
}