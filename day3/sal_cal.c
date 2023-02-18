#include<stdio.h>

int main()

{
int  y_ser, qua, salary,it,hr,acc,dep;

printf("Enter your department:\n1for IT\n2 for HR\n3 for ACCOUNT: ");
scanf("%d",&dep);

printf("Enter your year of service:");
scanf("%d",&y_ser);

printf("Enter the garduation type:\n1 for Post_graduate\n2 for graduate: ");
scanf("%d",&qua);


if(dep==1)//IT
{
	if (y_ser>=10 && qua==1)
	{
	printf("Your salary is 150000");
	}
	else if (y_ser>=10 && qua==2)
	{
	printf("Your salary is 100000");
	}
	else if(y_ser<10 && qua==1)
	{printf("Your salary is 100000");}
	else if (y_ser<10 && qua==2)
	{printf("Your salary is 70000");}

}	


if(dep==2)//HR
{
	if (y_ser>=10 && qua==1)
	{
	printf("Your salary is 100000");
	}
	else if (y_ser>=10 && qua==2)
	{
	printf("Your salary is 80000");
	}
	else if(y_ser<10 && qua==1)
	{printf("Your salary is 90000");}
	else if (y_ser<10 && qua==2)
	{printf("Your salary is 50000");}


}

if(dep==3)//ACCOUNT
{
	if (y_ser>=10 && qua==1)
	{
	printf("Your salary is 120000");
	}
	else if (y_ser>=10 && qua==2)
	{
	printf("Your salary is 90000");
	}
	else if(y_ser<10 && qua==1)
	{printf("Your salary is 100000");}
	else if (y_ser<10 && qua==2)
	{printf("Your salary is 60000");}


}
}
