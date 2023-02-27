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
        new->next=start;
    }
    else
    {
        end->next=new;
        new->next=start;
        end=new;
        
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
    ptr->next=new;
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
        end=NULL;
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
    else if (start->next==start && start->data == x)
    {
        temp=start;
        start=NULL;
        end=NULL;
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
        else if (temp->next==start)
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


void main()
{
    creatnode();
    printf("\n");
    displaynode();
    // printf("\n");
    insert_first();
    printf("\n");
    insert_end();
    printf("\n");
    displaynode();
    // insert_before();
    printf("\n");
    // delete_first();
    // printf("\n");
    // delete_end();
    // printf("\n");
    delete_specific();
    printf("\n");
    displaynode();


    
    
}