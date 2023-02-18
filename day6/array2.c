#include<stdio.h>

int main()
{
int i,a[7],p=0,n=0,odd=0,even=0,zero=0;


for (i=0;i<7;i++)
{
printf("Enter the number:");
scanf("%d",&a[i]);
}
for (i=0;i<7;i++)
{
printf("%d",a[i]);
}

for(i=0;i<7;i++)
{
if(a[i]>0)
{p=p+1;
}
if(a[i]<0)
{
n=n+1;
}
if(a[i]==0)
{
zero=zero+1;
}
if(a[i]%2==0)
{
even=even+1;
}
if(a[i]%2==1)
{
odd=odd+1;
}

}
printf("count of positive is: %d\n",p);
printf("count of negaitive is: %d\n",n);
printf("count of zero is: %d\n",zero);
printf("count of odd is: %d\n",odd);
printf("count of even is: %d\n",even);
}










