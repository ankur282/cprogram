#include<stdio.h>
int iseven(int i)
{
    
    if(i%2==0)
    {
        return 1;

    }
    else 
    {
        return 0;
    }
}
void main()
{
    int n;
    for(n=0;n<1000;n++)
    {
        if(iseven(n))
        {
            printf("This is even:%d\n",n);
        }
    }
}