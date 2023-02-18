#include<stdio.h>

int main()
{
int i,num=0,sum=0,rem=0,tem;
printf("Enter the number:");
scanf("%d",&num);
tem=num;
while(num>0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if (sum==tem){
printf("your number is armstrong :%d\n",sum);
}
else
{
printf("This is not\n");}
}
