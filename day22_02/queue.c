#include<stdio.h>

int n=5;
int f=0;
int r=-1;

int q[5];

void enqueue(int data)
{
    if (r==n-1)
    {
        printf("Full...full...fulll...\n");
    }
    else 
    {
        r=r+1;
        q[r]=data;

        printf("data = %d is insterted in que f=%d r=%d \n",data,f,r);
    }
   
}

void endqueue(int q[])
{
    
    if (f==r+1)
    {
        printf("empty.....empty...empty..\n");
    }
    else 
    {
        f=f+1;
        // q[f]=data;
        printf("data = %d is removed from in queue f=%d r=%d \n",q[f-1],f,r);
    }
   
}



void main()
{
    int i,data;
    for ( i = 0; i < n; i++)
    {
       printf("Enter the value:");
       scanf("%d",&data);
       enqueue(data);
    }
    for ( i = 0; i < n; i++)
    {
      endqueue(q);
    }
}