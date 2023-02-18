#include<stdio.h>
int main()

{
int a[100],i,n,j,flag;
printf("number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
flag=1;
break;
}
if(flag==1)
{
printf("This is leader:%d\n",a[i]);
}
flag=0;
}
}




}
