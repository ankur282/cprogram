#include<stdio.h>

struct node
{
    int data;
    struct node* next;
   
    
};
struct  node* start;




void creatlist()
{
    int n;

    printf("Enter the no of node:");
    scanf("%d",&n);
    
    struct node* ptr;
    struct node* new=malloc(sizeof(struct node));

    printf("Enter the data:");
    scanf("%d",&new->data);

    new->next=NULL;
    start=new;
    ptr=new;

    for(int i=1;i<n;i++)
    {
        new=malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->next=NULL;

        ptr->next=new;
        ptr=new;
    }


}

void displaylist()
{
    struct node* ptr;
    ptr=start;
    int i=0;
    while (ptr!=NULL)
    {
        printf("Node is: %d and value is: %d\n",i,ptr->data);
        i=i+1;
        ptr=ptr->next;
    }
    
    
}

void main()
{
    creatlist();

    displaylist();


    
    


    
}
