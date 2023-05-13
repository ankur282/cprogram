#include<stdio.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;

    /* data */
};

struct node* createnode(int data)
{
    struct node* root = malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;

    return root;
}

struct node* create_tree(struct node* new)
{
    int data;
    printf("Enter the data:\n");
    scanf("%d\n",&data);
    new=createnode(data);





}
