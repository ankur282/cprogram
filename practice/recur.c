#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int data;
	struct tree* left;
	struct tree* right;
};

struct tree* cratenode(int data)
{
	struct tree* new=malloc(sizeof(struct tree));
	// printf("Enter the first node data:");
	// scanf("%d",&new->data);
	new->data=data;

	new->left=NULL;
	new->right=NULL;

	return new;
}

struct tree* insert_value(struct tree* root)
{
	int data;
	printf("insert value in root:");
	scanf("%d",&data);

	if(data==-1)
	{
		return NULL;
	}
	root = cratenode(data);

	root->left=insert_value(root->left);

	root->right=insert_value(root->right);

	return root;
}

void dispaly(struct tree* root)
{
	if (root==NULL)
	{
		return;
	}
	dispaly(root->left);
	printf("%d",root->data);
	dispaly(root->right);
	
}



int main()
{
	int n;

	printf("Enter the number for selection:\n");
	printf("1.-- ")
	scanf("%d",&n);
	switch (n)
	{
	case 1:
		
		break;
	
	default:
		break;
	}









	struct tree* root;
	// root = cratenode(data);
	root = insert_value(root);
	dispaly(root);





}
