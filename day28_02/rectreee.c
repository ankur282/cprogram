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


struct node *create_tree(struct node *root)
{
int data;
printf("enter data for node: ");
scanf("%d",&data);
if(data==-1)
{return NULL;}
root=create_node(data);
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

void display_pre(struct node *root)
{
if(root==NULL){return;}
printf("%d\n",root->data);
display_inorder(root->left);
display_inorder(root->right);
}

void display_post(struct node *root)
{
if(root==NULL){return;}
display_inorder(root->left);
display_inorder(root->right);
printf("%d\n",root->data);
}


void main()
{
struct node *root=NULL;
root=create_tree(root);
printf("inorder : \n");
display_inorder(root);
printf("preorder : \n");
display_pre(root);
printf("postorder : \n");
display_post(root);
}