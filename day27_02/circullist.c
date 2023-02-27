#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct  node* start;
struct  node* end;



void creatnode()
{
    int n;

    printf("Enter the no of node:");
    scanf("%d",&n);
    
    struct node* new=malloc(sizeof(struct node));

    printf("Enter the data:");
    scanf("%d",&new->data);

    new->next=new;
    start=new;
    end=new;

    for(int i=1;i<n;i++)
    {
        new=malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->next=start;
        end->next=new;
        end=new;



        
    }
}


void displaynode()
{
    struct node* end;
    end=start;
    

    do
    {
        printf("The data is: %d\n",end->data);
        end=end->next;
    } while (end!=start);

}

void insert_first()
{
    struct  node* new=malloc(sizeof(struct node));
    printf("Enter the node value at starting:");
    scanf("%d",&new->data);
    new->next=NULL;
    //list is empty
    if(start==NULL)
    {
        start=new;
        new->next=start;
    }
    else
    {
        new->next=start;
        start=new;
        end->next=new;
    }
}


void main()
{
    creatnode();
    printf("\n");
    displaynode();
    printf("\n");
    insert_first();
    printf("\n");
    displaynode();
    
    
}