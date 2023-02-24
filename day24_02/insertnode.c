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





void main()
{
    creatlist();

    displaylist();

    insert_first();

    insert_end();
    displaylist();



    
    


    
}
