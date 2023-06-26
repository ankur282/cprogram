#include<stdio.h>

struct tree
{
	int data;
	int *left;
	int *right;


};


int main()
{
	struct tree v1;
	printf("enter the data:");
	scanf("%d",&v1.data);
	printf("the data is:%d\n",v1.data);


}
