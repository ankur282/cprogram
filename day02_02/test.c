#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
   
    
};
struct  node* start2;
struct node* end2;

struct  node* start1;
struct node* end1;
struct node* list=NULL;
int x,n;





void createlist2()
{
    

    printf("Enter the no of node for second list:");
    scanf("%d",&x);

    struct node* ptr2;
    struct node* second=malloc(sizeof(struct node));

    printf("Enter the data for second list:");
    scanf("%d",&second->data);


    second->next=NULL;
    start2=second;
    ptr2=second;

    for(int i=1;i<x;i++)
    {
        second=malloc(sizeof(struct node));
        printf("Enter the data for second list:");
        scanf("%d",&second->data);
        second->next=NULL;

        ptr2->next=second;
        ptr2=second;
    }


}




void creatlist1()
{
    

    printf("Enter the no of node for first list:");
    scanf("%d",&n);
    
    struct node* ptr1;
    struct node* first=malloc(sizeof(struct node));

    printf("Enter the data for first list:");
    scanf("%d",&first->data);

    first->next=NULL;
    start1=first;
    ptr1=first;

    for(int i=1;i<n;i++)
    {
        first=malloc(sizeof(struct node));
        printf("Enter the data for first list:");
        scanf("%d",&first->data);
        first->next=NULL;

        ptr1->next=first;
        ptr1=first;
    }


}

void displaylist1()
{
    struct node* ptr;
    ptr=start1;
    int i=0;
    while (ptr!=NULL)
    {
        printf("Node is: %d and value is: %d\n",i,ptr->data);
        i=i+1;
        ptr=ptr->next;
    }
    
    
}

void displaylist2()
{
    struct node* ptr;
    ptr=start2;
    int i=0;
    while (ptr!=NULL)
    {
        printf("Node is: %d and value is: %d\n",i,ptr->data);
        i=i+1;
        ptr=ptr->next;
    }
    
    
}


void isSort2()
{
struct node* ptr;
struct node* ptr2;
int temp;
ptr2=start2;
while(ptr2->next!=NULL)
{
    ptr=start2;
    while(ptr->next!=NULL)
    {
        if((ptr->data)>(ptr->next->data))
        {
            temp=ptr->data;
            ptr->data=ptr->next->data;
            ptr->next->data=temp;
        }
        ptr=ptr->next;
        }
ptr2=ptr2->next;
}
}


void isSort1()
{
struct node* ptr;
struct node* ptr1;
int temp;
ptr1=start1;
while(ptr1->next!=NULL)
{
    ptr=start1;
    while(ptr->next!=NULL)
    {
        if((ptr->data)>(ptr->next->data))
        {
            temp=ptr->data;
            ptr->data=ptr->next->data;
            ptr->next->data=temp;
        }
        ptr=ptr->next;
        }
ptr1=ptr1->next;
}
}

void isMerge()
{
    struct node* ptr1;
    struct node* ptr2;
    

    ptr1=start1;
    ptr2=start2;

   if(x>=n)
   {
    while (ptr2->next!=NULL && ptr1->next!=NULL)
    {
        if((ptr2->data)>(ptr1->data))
        {
            list=ptr2->data;
            ptr1->data=list->next;
            
            
        }
        ptr2=ptr2->next;
    
    }

    
   }
   else
   {
    while (ptr1->next!=NULL && ptr1->next!=NULL)
    {
        if((ptr2->data)>(ptr1->data))
        {
            list=ptr2->data;
            ptr1->data=list->next;
            
            

        }
        ptr1=ptr1->next;
    }

   }

    
    

}
void displaylist()
{
    struct node* ptr;
    ptr=list;
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
    creatlist1();
    printf("\n");
    displaylist1();
    printf("\n");
    isSort1();
    printf("\n");
    displaylist1();
    createlist2();
    printf("\n");
    displaylist2();
    printf("\n");
    isSort2();
    printf("\n");
    displaylist2();
    isMerge();
    printf("\n");
    displaylist();


}
