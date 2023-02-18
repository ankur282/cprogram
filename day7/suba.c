#include<stdio.h>
int main()

{
int a[100],i,n,j,s,sum=0,k;
printf("number:");
scanf("%d",&n);
printf("sum:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=0;
for(j=i;j<n;j++)
{
sum=sum+a[j];
if(sum==s)
{
for(k=i;k<=j;k++)
{
printf("%d,",a[k]);
}
printf("\n");
}


}
}
}

