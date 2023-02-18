#include<stdio.h>

int main()
{
int a=5,b=2,c=1,ans,choice;
printf("Enter the choice:\n1 for addition\n2 for substraction\n3 for multiplication:");
scanf("%d",&choice);

switch(choice)
{
case 1:
ans=a+b;
printf("the sum is :%d ",ans);
break;

case 2:
ans=a-b;
printf("the sub is:%d ",ans);
break;

case 3:
ans=a*b;
printf("the mul is :%d ",ans);
break;

}
}
