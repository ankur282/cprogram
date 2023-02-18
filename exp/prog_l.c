#include<stdio.h>

int main()
{
int profit,price,cost;

printf("Enter the price of the total items: ");
scanf("%d",&price);

printf("Enter the total profit of the total items:");
scanf("%d",&profit);

cost=price-profit;
cost=cost/15;
printf("The cost of one item is:%d",cost);


}
