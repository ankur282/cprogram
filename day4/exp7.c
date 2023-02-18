#include<stdio.h>

int main()
{
int i,n,num,cp=0,cn=0,ce=0,co=0,c0=0;
{
printf("the number:");
scanf("%d",&num);

for(i=1;i<num;i++)
{
printf("enter the number:");
scanf("%d",&n);

if (n==0)
{
c0++;
}
if (n>0)
{
cp++;
}
if (n<0)
{
cn++;
}
if (n%2==0)
{
ce++;
}
if (n%2==1)
{
co++;
}

}
printf("The number is zero:%d \n is positive: %d\n is negetive: %d\n is even:  %d\n is odd: %d ",c0,cp,cn,ce,co);
}




}
