#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;

};

struct node* start = NULL;

struct node* createnode(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}

void insertnode(struct node* head,int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->next=NULL;
    struct node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
        /* code */
    }
    
    curr->next=node;

    

}
void insertAtstart(struct node** head,int data)
{


    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->next=*head;
    *head = node;
}

void insertbetween(struct node** head,int data)
{
    struct node* temp = *head; 
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->next=*head;

}

void displaylist(struct node* head)
{
    struct node* ptr;
    ptr = head;
    while (ptr->next != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;

        /* code */
    }
    printf("\n");
    
}


int main()
{
    start=createnode(5);
    
    insertnode(start,6);
     insertnode(start,7);
     insertnode(start,8);
     insertnode(start,9);
     insertnode(start,10);
     insertAtstart(&start,4);
     displaylist(start);

}