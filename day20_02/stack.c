#include<stdio.h>


int top = -1,size=5;
//int peep(int a[]){if(top>-1 && top<size)return a[top]};

int pop(int a[])
{
    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    top=top-1;
    printf("%d is removed from stack\n",a[top+1]);

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




void main()
{
    int a[size];
    //push(a,5);
    push(a,10);
    push(a,20);
    push(a,30);
    push(a,40);

    pop(a);




}