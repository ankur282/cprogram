#include<stdio.h>

int main()
{
int i,a[7],swap=0;


for (i=0;i<7;i++)
{
printf("Enter the number:");
scanf("%d",&a[i]);
}
for (i=0;i<7;i++)
{
printf("%d\n",a[i]);
}
swap=a[6];
for(i=6;i>=0;i--)
{
a[i]=a[i-1];
printf("the swap is%d,\n",a[i]);
}
a[0]=swap;
//printf("the swap%d\n",a[0]);
}


