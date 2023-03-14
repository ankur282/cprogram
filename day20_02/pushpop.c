#include<stdio.h>
int top = -1,size;

int peep(int a[])
{
    if(top>-1 && top<size)
    return a[top];
}

int pop(int a[])
{
    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    
    printf("%d is removed from stack\n",a[top]);
    top=top-1;
    return a[top];   

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
    int a[size],temp[size];
    printf("Enter size of string:");
    scanf("%d",&size);
    for(int i = 0; i < size;i++)
    {
        scanf("%d",&a[i]);
        push(temp,a[i]);
    }
    for(int i=0;i<size;i++)
    {a[i]=pop(temp);}
    // pop(a);
    // prinstack(a);
    // printf("\npointer is at %d\n",peep(a));


    //push(a,5);
    // push(a,10);
    // push(a,20);
    // push(a,30);
    // push(a,40);

    // pop(a);




}