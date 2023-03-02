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
    if(root==NULL)
    {
        root=create_node(data);


    }
    else
    {
        if (data<root->data)
        {
            // inster on left 
            root->left=insert_bst(root->left,data);
            /* code */
        }
        else
        {
            // insert on right
            root->right=insert_bst(root->right,data);
        }
        
    }
    
    return root;
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
display_pre(root->left);
display_pre(root->right);
}

void display_post(struct node *root)
{
if(root==NULL){return;}
display_post(root->left);
display_post(root->right);
printf("%d\n",root->data);
}

int display_min(struct node *root)
{
if(root->left==NULL){
    printf("%d\n",root->data);
    return;
    }
display_min(root->left);
// printf("%d\n",root->data);
// display_inorder(root->right);
}

int display_max(struct node *root)
{
if(root->right==NULL){
    printf("%d\n",root->data);
    return;
    }
display_max(root->right);
// printf("%d\n",root->data);
// display_inorder(root->right);
}e


int isdelete(struct node* root)
{
    
}


void main()
{
    struct node* root;
    root=take_input(root);

    display_inorder(root);
    printf("\n");

    printf("Max:\n");
    display_min(root);
    printf("Min:\n");

    display_max(root);

    //display_pre(root);
    
    //display_post(root);

    

    

}