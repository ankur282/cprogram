#include<stdio.h>
int top = -1;
int size;
// int peep(int a[])
// {
//     if(top>-1 && top<size)
//     return a[top];
// }

int pop(int a[])
{
    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    
    printf("%d is removed from stack\n",a[top]);
    top=top-1;
    return a[top+1];   

}

int push(int a[],int data)
{
    //int size;
    if(top==size-1)
    {
        printf("Full");
        return;
    }
    
    top=top+1;
    a[top]=data;
    printf("%d is add in stack\n",a[top]);
    return a[top];
}


void insertatBottom(int s[],int data)
{
    if (top==-1)
    {
       push(s,data);
       return;
    }
    int x=pop(s);
    insertatBottom(s,data);
    push(s,x);
}

void reverse_stack(int s[])
{
    if(top==0)
    {
        return;
    }
    int y=pop(s);
    reverse_stack(s);
    insertatBottom(s,y);
}

void main()
{
   int a[size],temp[size];
    printf("Enter size of string:");
    scanf("%d",&size);
    for(int i = 0;i<size;i++)
    {
        scanf("%d",&a[i]);
        push(temp,a[i]);
        
    }
    // for(int i=0;i<size;i++)
    // {a[i]=pop(temp);}
    reverse_stack(temp);
    
    
   
}