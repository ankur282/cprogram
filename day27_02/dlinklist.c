#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;

};
struct  node* start=NULL;
struct  node* end=NULL;

void creatnode()
{
    int n;

    printf("Enter the no of node:");
    scanf("%d",&n);
    
    struct node* new=malloc(sizeof(struct node));

    printf("Enter the data:");
    scanf("%d",&new->data);
    new->next=NULL;
    new->prev=NULL;
    start=new;
    end=new;

    for(int i=1;i<n;i++)
    {
        new=malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        end->next=new;
        new->prev=end;
        end=new;



        
    }
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
        new->next=NULL;
        new->prev=NULL;

    }
    else
    {
        new->next=start;
        start->prev=new;
        start=new;
        
    }
}

void insert_end()
{
    struct  node* new=malloc(sizeof(struct node));
    printf("Enter the node value at the end:");
    scanf("%d",&new->data);
    new->next=NULL;
    //list is empty
    if(start==NULL)
    {
        start=new;
        new->next=NULL;
        new->prev=NULL; 
    }
    else
    {
        new->prev=end;
        end->next=new;
        end=new;
        
    }
}

void displaynode()
{
    struct node* end;

    end=start;
    while (end!=NULL)
    {
        printf("The data is: %d\n",end->data);
        end=end->next;
    }
}

void insert_before()
{

    int x;
    printf("Enter the value of node:");
    scanf("%d",&x);

    struct  node* new=malloc(sizeof(struct node));
    printf("Enter the value of node in add before:");
    scanf("%d",&new->data);
    new->next=NULL;

    struct node* ptr;
    ptr=start;
    while (ptr->next->data!=x)
    {
        ptr=ptr->next;
        if (ptr==NULL)
        {
            break;
        }
    }
    new->next=ptr->next;
    new->prev=ptr;
    ptr->next=new;
}


void insert_after()
{

    int x;
    printf("Enter the value of node:");
    scanf("%d",&x);

    struct  node* new=malloc(sizeof(struct node));
    printf("Enter the value of node in add after:");
    scanf("%d",&new->data);
    new->next=NULL;
    

    struct node* ptr;
    ptr=start;
    while (ptr->data!=x)
    {
        ptr=ptr->next;
        if (ptr==NULL)
        {
            break;
        }
    }
    if(ptr->next==NULL)
    {
        new->prev=end;
        end->next=new;
        end=new;
    }
    else{
    new->next=ptr->next;
    ptr->next->prev=new;
    new->prev=ptr;
    ptr->next=new;
    }
}



void delete_first()
{
    struct node* temp;
    if (start==NULL)
    {
        printf("List is empty........");
    }
    else if (start->next==start)
    {
        temp=start;
        free(temp);
        
    }
    else
    {
        temp=start;
        start=start->next;
        end->next=start;
        free(temp);
    }
}


void main()
{
    creatnode();
    // printf("\n");
    // insert_first();
    // printf("\n");
    // insert_end();
    // printf("\n");
    // insert_before();
    // printf("\n");
    displaynode();
    insert_after();
    printf("\n");

    displaynode();

}
