#include<stdio.h>

int main()
{
int day, month, year;
printf("Enter the number of days:");
scanf("%d",&day);
month=day/30;
printf("the month is: %d\n",month);
year=day/365;
printf("the year is %d\n",year);


}
