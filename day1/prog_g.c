#include<stdio.h>

int main()
{
int sum;
int n=12345;

int d1=n%10;
n=n/10;

int d2=n%10;
n=n/10;


int d3=n%10;
n=n/10;

int d4=n%10;
n=n/10;

int d5=n%10;


sum=d1+d2+d3+d4+d5;
printf("sum of the number is %d",sum);
}
