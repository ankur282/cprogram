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
    struct node* root;
    root=take_input(root);


    display_inorder(root);
    printf("\n");

    isdelete(root,15);
printf("inorder : \n");
display_inorder(root);


    
}
