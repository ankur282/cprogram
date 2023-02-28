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


void delete_node()
{
    int x,count=0;
    struct node* temp;
    temp=end;

    printf("Enter the nth node: ");
    scanf("%d",&x);
    

    if(start==NULL)
    {
        printf("List is empty......");

    }
    if (x==0)
    {
        temp->prev->next=NULL;
        

        free(temp);
        
        /* code */
    }
    else 
    {
    while (temp->prev!=NULL)
    {
        count=count+1;
        temp=temp->prev;
        if (temp->prev==NULL)
        {
          
            
            temp->next->prev=NULL;
            start=temp->next;

            
            free(temp);
           
        }
        else
        {
            if ((count==x))
            {
                //temp->next=temp->prev->next;
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
            break;
                
            }
        }
    }
}
}


void main()
{
    creatnode();
    displaynode();
    delete_node();
    displaynode();

} 



