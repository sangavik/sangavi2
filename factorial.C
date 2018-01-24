#include<stdio.h>
int main()
{
int fact=1,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of given number is%d",fact);
return 0;
}
