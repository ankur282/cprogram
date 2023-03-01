#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create_node(int data)
{
    struct node* new=malloc(sizeof(struct node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
    return new;
}

struct node* insert_bst(struct node* root,int data)
{
    if(data>root)
    {

    }
}

struct node* take_input(struct node* root)
{
    int data;
    printf("Enter the data for node:");
    scanf("%d",&data);

    while (data!=-1)
    {
        root=insert_bst(root,data);
        printf("Enter the data for node:");
        scanf("%d",&data);   
        /* code */
    }
    
    
    
    return root;

}

void main()
{
    struct node* root;
    root=take_input(root);

}