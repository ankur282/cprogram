#include<stdio.h>

int main()
{
int base_s,da,ha,gross_s;

printf("Enter your salary:");
scanf("%d",&base_s);
da=base_s*0.4;
printf("Your darness allowance is:%d\n",da);
ha=base_s*0.2;
printf("Your house allowence is:%d\n",ha);

gross_s=base_s+da+ha;


printf("Your gross salary is: %d\n",gross_s);

}
