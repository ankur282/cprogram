#include<stdio.h>

int main()
{
int i,a[7],l=0,r=0,n,j;


for (i=0;i<7;i++)
{
printf("Enter the number:");
scanf("%d",&a[i]);
}
for (i=0;i<7;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<7;i++)
{

for(n=0;n<i;n++)
{
l=l+a[n];
//printf("the left%d",l);
}
for(j=i+1;j<7;j++)
{
r=r+a[j];
//printf("the right %d",r);
}
if (l==r)
{
printf("equa is:%d\n",i);
break;
}
l=0;
r=0;
}
}

