#include<stdio.h>

int main()
{
int n,type,qua,gt,pt,st,bill=0;
printf("Enter your choice\npress 1 for order\npress 0 for nothing:");
scanf("%d",&n);
if(n==0)
{
printf("thank you for visit...........");
}
while(n==1)
{
printf("what do you want to order?\n1.Gujarati menu(0):\n2.Punjabi menu(1):\n3.South Indian(2):");
scanf("%d",&type);

switch(type)
{
case 0:
	printf("Gujarati menu:\n1.bhajiya:100/-(0):\n2.Khaman:70/-(1):\n3.Ghathiya:50/-(2):");
	scanf("%d",&gt);
	printf("Enter the quantity:");
	scanf("%d",&qua);
	if (gt==0)
	{
	bill+=qua*100;
	}	
	else if (gt==1)
	{
	bill+=qua*70;
	}
	else if (gt==2)
	{
	bill+=qua*50;
	}
break ;
case 1:
	printf("Punjabi menu:\n1.lassi:40/-(0):\n2.dahi vada:120/-(1):\n3.Amritsari kulchas:90/-(2):");
	scanf("%d",&pt);
	printf("Enter the quantity:");
	scanf("%d",&qua);
	if (pt==0)
	{
	bill+=qua*40;
	}	
	else if (pt==1)
	{
	bill+=qua*120;
	}
	else if (pt==2)
	{
	bill+=qua*90;
	}
break ;
case 2:
	printf("south indian menu:\n1.Idli:60/-(0):\n2.Uttapam:140/-(1):\n3.Dosa:180/-(2):");
	scanf("%d",&st);
	printf("Enter the quantity:");
	scanf("%d",&qua);
	if (st==0)
	{
	bill+=qua*60;
	}	
	else if (st==1)
	{
	bill+=qua*140;
	}
	else if (st==2)
	{
	bill+=qua*180;
	}
break ;
}
printf("Do you want more?\nfor yes press 1\n for no press 0:");
scanf("%d",&n);
}

printf("\nYour bill is:%d  ",bill);

}

