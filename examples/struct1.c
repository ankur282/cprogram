#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;

};

struct node* start;
int count;


void createnode()
{
    
    struct node* new = malloc(sizeof(struct node));
    struct node* ptr = malloc(sizeof(struct node));
    printf("enter the node number:");
    scanf("%d",&count);
    printf("Enter the value:");
    scanf("%d",&new->data);
    new->next=NULL;
    start=new;
    ptr=new;
    for (int  i = 1; i < count; i++)
    {
        new = malloc(sizeof(struct node));
        printf("Enter the value:");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=new;

        /* code */
    }
    
    
    
    
    
    
    
   



}

void display()
{
    struct node* ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        
        
         printf("the data is %d\n",ptr->data);
         ptr=ptr->next;
        /* code */
    }
    
}

int main()
{
    createnode();
    display();
}
