#include<stdio.h>

int main()
{
int amt,sum;
printf("Enter the withdraw amount:");
scanf("%d",&amt);

sum=amt/100;
printf("the notes of 100 is:%d\n",sum);

amt=amt-sum*100;
sum=amt/50;
printf("the notes of 50 is:%d\n",sum);

amt=amt-sum*50;
sum=amt/10;
printf("the notes of 10 is:%d\n",sum);

}
