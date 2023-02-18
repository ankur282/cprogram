#include<stdio.h>

int main()
{
int c,d;
printf("Enter the c value:");
scanf("%d",&c);

printf("Enter the d value:");
scanf("%d",&d);

c=c+d;
d=c-d;
c=c-d;

printf("The interchenged value is c=%d and d=%d",c,d);
}




