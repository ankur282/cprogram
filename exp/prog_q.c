#include<stdio.h>

int main()

{
int z,v,x,y;
printf("Enter the value of x and y:");
scanf("%d%d",&x,&y);
z=x*x*x+x*x+2*x+5;
v=x*x+y*y+2*x*y-10;
printf("the value of  x*x*x+x*x+2*x+5 is:%d\n",z);
printf("the value of x*x+y*y+2*x*y-10 is:%d",v);


}
