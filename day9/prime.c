#include<stdio.h>
int isprime(int n)
{
    int flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        if (flag==1)
        {
            return 1;
        }
    }
}

void main()
{
    int i;
    for(i=0;i<1000;i++)
    {
        if(isprime(i))
        {
            printf("This is prime:%d\n",i);
        }
    }
    
}