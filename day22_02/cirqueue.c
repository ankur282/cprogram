#include<stdio.h>

int n=5;
int f=-1;
int r=-1;

int q[5];

int isqueuefull()
{
  if((f==0 && r==n-1) || r==f-1)
  {
    return 1;
  }
 else
  {
    return 0;
  }
}


void dqueue(int q[])
{
    
    if (f==-1)
    {
        printf("empty.....empty.......empty.......\n");
    }
    else 
    {
      int data=q[f];
      if(f==r)
      {
        f=-1;
        r=-1;
      }
      else
      {
        if (f==n-1)
        {
          f=0;
        }
        else
        {
          f=f+1;
        }
      }
          printf("data = %d is removed from queue f=%d r=%d \n",data,f,r);
    }
   
}


void enqueue(int data)
{
    if (isqueuefull())
    {
        printf("Full...full...fulll...\n");
    }
    else 
    {
    if (f == -1)
    {
      f=0;
    } 
    r=(r+1)%n;
    q[r] = data;
    printf("data = %d is insterted in que f=%d r=%d \n",data,f,r);
    }
   
}






void main()
{
    int i,data;
    for ( i = 0; i < 7; i++)
    {
       printf("Enter the value:");
       scanf("%d",&data);
       enqueue(data);
    }
    dqueue(q);
    dqueue(q);
    enqueue(10);
    enqueue(20);
    dqueue(q);
    dqueue(q);
    dqueue(q);
    dqueue(q);
    dqueue(q);
    dqueue(q);

    

    // for ( i = 0; i < n; i++)
    // {
    //   endqueue(q);
    // }
}