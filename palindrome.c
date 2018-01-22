#include<stdio.h>
int main()
{
int n,reverse=0,temp;
printf("enter the number");
scanf("%a",&n);
temp=n;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(n==reverse)
printf("palindrome");
else
printf("not palindrome");
return 0;
}
