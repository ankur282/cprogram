#include<stdio.h>

int main()
{
int i,n,count=0;
printf("enter the number:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
if(i%5==0 || i%3==0)
{
printf("%d,",i);
count++;
}
//count=count++;
}
printf("count is \n%d",count);
}
