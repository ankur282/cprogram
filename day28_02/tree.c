#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;

};                                                                      

struct  node* start=NULL;
struct  node* end=NULL;

struct  node* createnode(int data)
{
    struct node* new=malloc(sizeof(struct node));

    new->data=data;
    new->left=NULL;
    new->right=NULL;
    return new;
   
}


struct node* create_tree(struct node* root)
{
    int data;
    printf("Enter the data:");
    scanf("%d",&data);

    if(data==-1)
    {
        return NULL;

    }
    root=createnode(data);

    root->left=create_tree(root->left);
    root->right=create_tree(root->right);

    return root;

}



void main()
{
    struct node* root=NULL;
    root=createnode(root);


} 
