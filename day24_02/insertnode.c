#include<stdio.h>

struct node
{
    int data;
    struct node* next;
   
    
};
struct  node* start;
struct  node* end;




void creatlist()
{
    int n;

    printf("Enter the no of node:");
    scanf("%d",&n);
    
    struct node* new=malloc(sizeof(struct node));

    printf("Enter the data:");
    scanf("%d",&new->data);

    new->next=NULL;
    start=new;
    end=new;

    for(int i=1;i<n;i++)
    {
        new=malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->next=NULL;

        end->next=new;
        end=new;
    }
}



void displaylist()
{
    struct node* end;
    end=start;
    int i=0;
    while (end!=NULL)
    {
        printf("Node is: %d and value is: %d\n",i,end->data);
        i=i+1;
        end=end->next;
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
        end=new;
    }
    else
    {
        new->next=start;
        start=new;

    }
    
}


void insert_between()
{

    int x;
    printf("Enter the value of node:");
    scanf("%d",&x);

    struct  node* new=malloc(sizeof(struct node));
    printf("Enter the node value in add between:");
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
    new->next=ptr->next;
    ptr->next=new;
    

    
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
    ptr->next=new;
    

    
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
        end=new;
    }
    else
    {
        end->next=new;
        end=new;
    }
}

void delete_first()
{
    
}




void main()
{
    creatlist();

    displaylist();

    // insert_first();

    // insert_end();

    // displaylist();

    // insert_between();

    displaylist();

    insert_before();

    displaylist();




    
    


    
}
