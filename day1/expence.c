#include<stdio.h>

int main()
{
float quan, price, bill=0;

printf("Enter the quantity:");
scanf("%f",&quan);

printf("Enter the price: ");
scanf("%f",&price);

bill=quan*price;

if (quan>1000)
{
bill=bill*0.9;
printf("The bill is %f\n",bill);
}
else
{
printf("the bill is %6.2f\n",bill);
}
}
