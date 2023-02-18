#include<stdio.h>
 

int fact(int n)
{
    int f=1;
for(int i=1;i<=n;i++)
{
    f=f*i;
}
return f;
}

void main()
{
    int n,z;
    printf("Enter the number to find the factorial:");
    scanf("%d",&n);
    z=fact(n);
    printf("The factorial is:%d\n",z);
}