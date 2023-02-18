#include<stdio.h>

int main()
{
int a,b,c,d;
printf("Enter four number:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if (a>b && a>c && a>d)
{
printf("%d is min\n",a);

}
else if(b>a && b>c && b>d)
{
printf("%d is min\n",b);
}
else if(c>a && c>b && c>d)
{
printf("%d is min\n",c);

}
else
{
printf("%d is min\n",d);

}

}
