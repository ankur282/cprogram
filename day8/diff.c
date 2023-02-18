#include<stdio.h>
int main()
{
int a[5]={15,10,5,25,10},b[5],i,j,k,d[5],diff=0,temp=0;
for(i=0;i<5;i++)
{
    temp=-32768;
if(i==0)
{
temp=a[i];}
for(j=0;j>=i;j--)
{
if(i==0)
{
temp=a[i];
for(j=i-1;j>=0;j--)
{
diff=a[i]-a[j];
b[j]=diff;
}
{
for(k=0;k<i;k++)
{
if(temp<b[k])
temp=b[k];
}
d[i]=temp;}
}
}
}
for(i=0;i<5;i++){
printf("diff is %d\n",d[i]);
}
}

