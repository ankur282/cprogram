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

void isbalanced(Struct node *root)
{
    int h1=height(root->left);

    int hr=height(root->right);

    if(abs(h1-hr)<=1)
    {
        printf("tree is balanced");

    }
    else
    {
        printf("tree is not balanced");
    }


}




struct node* mirror(struct node* root)
{
    struct node* temp;
    temp=root->left;
    root->left=root->right;
    root->right=temp;

    root->left=mirror(root->left);
    root->right=mirror(root->right);

    return root;

}
void main()
{
    struct node* root=NULL;
    root=create_tree(root);
    display_inorder(root);

    printf("%d",root->data);


} 

