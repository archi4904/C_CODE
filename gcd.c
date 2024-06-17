#include<stdio.h>
void main()
{
int i,n1,n2,gcd;
printf("ENTER TWO NUMBER");
scanf("%d%d",&n1,&n2);
 for(i=1;i<=n1&&i>=n2;i++)
 {
 	if(n1%1==0&&n2%i==0)
 	{
	 gcd=i;
 }
}
printf("GCD=%d",gcd);

}