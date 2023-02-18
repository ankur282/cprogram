#include<stdio.h>
int main()
{
int i,n,sum=0,rem=0,tem,count=0;

printf("Enter the number:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
tem=i;
sum=0;
while(tem>0)
{
rem=tem%10;
sum=sum+(rem*rem*rem);
tem=tem/10;
}
if (i==sum){
printf("your armstrong is :%d\n",i);
count=count+1;
}
}
printf("your count is  :%d\n",count);
}
