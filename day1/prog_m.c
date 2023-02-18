#include<stdio.h>

int main()
{

int x=12391,out;

int d5=x%10;
int a5=(d5+1)%10;
x=x/10;

int d4=x%10;
int a4=(d4+1)%10;
x=x/10;

int d3=x%10;
int a3=(d3+1)%10;
x=x/10;

int d2=x%10;
int a2=(d2+1)%10;
x=x/10;

int d1=x%10;
int a1=(d1+1)%10;
x=x/10;

out=10000*a1+a2*1000+a3*100+a4*10+a5;
printf("output is:%d\n",out);
}

