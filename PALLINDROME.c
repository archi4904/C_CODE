#include<stdio.h>
void main()
{
	int n,org,rev=0,rem;
	printf("enter the number");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	}
	printf("\nREVERSE NUMBER=%d",rev);
	if (org==rev)
	{
		printf("THE NUMEBR IS PALLINDROME");
    }
    else
    {
    	printf("THE NUMEBR IS NOT PALINDROME");
	}
}