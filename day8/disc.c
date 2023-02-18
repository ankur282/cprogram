#include<stdio.h>
int main()
{
int a,b,c,d,e,f,a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,sum;
printf("Enter the price of iteam:");
scanf("%d",&a);
printf("Enter the price of iteam:");
scanf("%d",&b);
printf("Enter the price of iteam:");
scanf("%d",&c);
printf("Enter the price of iteam:");
scanf("%d",&d);
printf("Enter the price of iteam:");
scanf("%d",&e);
printf("Enter the price of iteam:");
scanf("%d",&f);


if(a<b && a<c && a<d && a<e && a<f)
{
printf("%d",a);
a=0;
}
if(b<c && b<d && b<e && b<f && b<c)
{
printf("%d",b);
b1=b;
}
if( c>a && c>b && c<d && c<e && c<f)
{
printf("%d",c);
c1=c;
}
if(d>b && d>c && d>a && d<e && d<f)
{
printf("%d",d);
d1=d;
}
if(e>b && e>c && e>d && e>a && e<f)
{
printf("%d",e);
e1=e;
}
if(f>b && f>c && f>d && f>e && f>a)
{
printf("%d",f);
f1=f;
}
sum=a1+b1+c1+d1+e1+f1;
printf("The min price is:%d",sum);
}

