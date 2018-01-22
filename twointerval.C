#include<stdio.h>
int main(0
{
int low,high,i,flag;
printf("enter two numbers");
scanf("%d%d,&low.&high);
printf("prime number btw %d%d",low,high);
while(low<high)
flag=0;
for(i=2;i<=low/2;++i)
{
if(low%i==))
{
flag=1;
break;
}

if(flag==0)
printf("%d",low);
++low;
}
return 0;
}
