#include<stdio.h>
int main()

{
int a[100],i,n,s1,sum=0,miss=0;
printf("number:");
scanf("%d",&n);
s1=n*(n+1)/2;
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}

miss=s1-sum;
printf("This is missing:%d\n",miss);

}

