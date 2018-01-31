#include<stdio.h>
#include<conio.h>
void main()
{
int low,high,i,tp1,tp2,rem,n=0,result=0;
printf("\n enter two numbers");
sacnf("%d%d",&low&high);
printf("\n armstrong interval btw %d and %d is ",low,high);
for(i=low+1;i<=high;i++)
{
tp2=i;
tp1=i;
while(tp1!=0)
{
tp/=10;
++n;
}
while(tp2!=0)
{
remainder=tp2/10;
result+=pow(rem,n);
tp2/=10;
}
if(result==i)
{
printf("%d\n",i);
}
getch();
}
}
