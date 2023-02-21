#include<stdio.h>
int top = -1;
int size = 10;

int pop(int a[])
{
    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    top=top-1;
    printf("%c is removed from stack\n",a[top+1]);

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
    // a[top]=data;
    printf("%c is add in stack\n",a[top]);
    return a[top];
}

void main()

{

char a[]={"[{()}]"},ch;
int i;
for (i=0;i<strlen(a);i++)
{
    ch==a[i];
    if(ch=='[' && )
    //printf("%c ",a[i]);
}

}