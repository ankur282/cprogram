#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,num,new_num;

printf("enter size of list: ");
scanf("%d",&num);

int *list=malloc(num*sizeof(int));

for(i=0;i<num;i++)
{
printf("enter list[%d]: ",i);
scanf("%d",&list[i]);
}

printf("enter new size of list: ");
scanf("%d",&new_num);

int *temp=realloc(list,new_num*sizeof(int));

if(new_num>num)
{
for(i=num;i<new_num;i++)
{
printf("enter list[%d]: ",i);
scanf("%d",&list[i]);
}

printf("the number in list are: \n");
for(i=0;list[i]!=NULL;i++)
{
printf("list[%d]:%d\n",i,list[i]);
}

free(list);
}
}
