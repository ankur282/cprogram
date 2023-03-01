#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;

};

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

void display_inorder(struct node *root)
{
if(root==NULL){return;}
display_inorder(root->left);
printf("%d\n",root->data);
display_inorder(root->right);
}


//Hight of tree
int hightTree(node* root)
{
    int x,y;
    if(root==NULL)
    {
        return 0;
    }
    x=hightTree(root->left);
    y=hightTree(root->right);
    if(x>y)
    return x+1;
    else
    return y+1;
}



void main()
{
    struct node* root=NULL;
    root=create_tree(root);
    display_inorder(root);

    printf("%d",root->data);


} 
