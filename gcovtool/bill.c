#include<stdio.h>

int main()
{

float burger,pizza,san,bill=0,bill_b=0,bill_p=0,bill_s=0;

printf("Enter the number of burger:");
scanf("%f",&burger);

printf("Enter the number of pizza:");
scanf("%f",&pizza);

printf("Enter the number of san:");
scanf("%f",&san);

if (burger > 5)
{
bill_b=burger*150*0.9;
}
else
{
bill_b=burger*150;
}



if (pizza*300 > 1000 )
{
bill_p=pizza*300*0.85;
}
else
{
bill_p=pizza*300;
}




if (san*100 > 500)
{
bill_s=san*100*0.8;
}
else
{
bill_s=san*100;
}



bill=bill_p+bill_s+bill_b;
if(bill==0)
{
printf("Please buy something!!\n");
}


bill=bill*1.12;

printf("The bill is %f\n",bill);

}
