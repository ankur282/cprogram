#include<stdio.h>

int main()
{
float price_b, days,fine;

printf("Enter the price of the book:");
scanf("%f",&price_b);

printf("Enter the number of day to late:");
scanf("%f",&days);

if(days<5)
{
fine=days*5;
}
else if(days>5 && days<11)
{
fine=25+(days-5)*10;


}
else if (days>=11 )
{
fine=75+(days-10)*20;
}

fine = fine>price_b?fine:price_b;


printf("fine is:%0.2f \n",fine);
}
