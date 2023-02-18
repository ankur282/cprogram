#include<stdio.h>

int main()
{
int x=0,fd,ld,sum;


printf("Enter the four digit number:");
scanf("%d",&x);
x=x/10;
ld=x%10;
x=x/100;
fd=x%10;


sum=fd+ld;
printf("first and last digit sum is: %d ",sum);

}
