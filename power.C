#include<stdio.h>
int main()
{
int base,exponent;
long long result=1;
printf("\n enter the base number:");
scanf("%d",&exponent);
printf("\n enter the base number:");
scanf("%d",&base);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("\n answer =%lld",result);
return 0;
}
