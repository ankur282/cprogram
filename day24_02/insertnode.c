#include<stdio.h>
#include<stdlib.h>

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
    struct node* temp;
    if (start==NULL)
    {
        printf("List is empty........");
    }
    else if (start->next==NULL)
    {
        temp=start;
        start=NULL;
        free(temp);
        /* code */
    }
    else
    {
        temp=start;
        start=start->next;
        free(temp);
    }
}

void delete_end()
{
    struct node* temp;
    struct node* prev;
    if (start==NULL)
    {
        printf("List is empty........");
    }
    else if (start->next==NULL)
    {
        temp=start;
        start=NULL;
        free(temp);
        /* code */
    }
    else
    {
        temp=start;
        while (temp->next->next!=NULL)
        {
            
            temp=temp->next;
        }
        temp->next=NULL;
    }
}

void delete_specific()
{
    int x;
    struct node* temp;
    struct node* prev;
    printf("Enter the value which you what to delelet:");
    scanf("%d",&x);

    if (start==NULL)
    {
        printf("List is empty........");
    }
    else if (start->next==NULL && start->data == x)
    {
        temp=start;
        start=NULL;
        free(temp);
        /* code */
    }
    else
    {
        temp=start;
        while (temp->data!=x)
        {
            prev=temp;
            
            temp=temp->next;
            if (temp==NULL)
            {
                break;
               
            }
            
        }
        if (temp==start)
        {
            delete_first();
           
        }
        else if (temp->next==NULL)
        {
            delete_end();
           
        }
        else
        {
            prev->next=temp->next;
            free(temp);
            
        }
    }
}

void reverse_list()
{
    struct node* prev=NULL;
    struct node* next=NULL;
    struct node* curr=start;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    start=prev;


    
}

void main()
{
    creatlist();

    displaylist();
    printf("\n");
    // insert_first();

    // insert_end();

    // displaylist();

    // insert_between();

    // displaylist();

    // insert_before();

    // displaylist();
    // delete_first();
    // printf("\n");

    // displaylist();
    // printf("\n");

    // delete_end();                                          
    // printf("\n");

    

    //delete_specific();
    //printf("\n");

    reverse_list();
    printf("\n");


    displaylist();
    printf("\n");
}
