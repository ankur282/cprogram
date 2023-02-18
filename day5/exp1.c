#include<stdio.h>

int main()
{
int i,n=0,sum=0,rem=0;
printf("Enter the number:");
scanf("%d",&n);

while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("your sum of:%d",sum);}
