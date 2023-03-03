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

struct node* display_min(struct node *root)
{
if(root->left==NULL){
    //printf("%d\n",root->data);
    return root->data;
    }
display_min(root->left);
// printf("%d\n",root->data);
// display_inorder(root->right);
}

struct node* isdelete(struct node* root,int data)
{
    if(root=NULL)
    {
        return root;
    }
    if (data<root->data)
    {
        root->left=isdelete(root->left,data);

        /* code */
    }
    else if(data>root->data)
    {
        root->right=isdelete(root->right,data);
    }
    else
    {
        if(root->left==NULL)
        {
            struct node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        struct node* temp=display_min(root->right);
        root->data=temp->data;
        root->right=isdelete(root->right,temp->data);
    }

return root;

}




void main()
{
    //int data;
struct node *root=NULL;
root=create_tree(root);
printf("inorder : \n");
display_inorder(root);
// printf("Enter the data which you want to delete:");

// isdelete(root,15);
// printf("inorder : \n");
// display_inorder(root);

}