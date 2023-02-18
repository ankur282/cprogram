/*#include<stdio.h>

int main()
{
int i,num=0,rev=0,rem=0;
printf("Enter the number:");
scanf("%d",&num);

while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("your number is :%d",rev);
}
*/

#include<stdio.h>

int main()
{
int i,num=0,rev=0,rem=0,tem=num;
printf("Enter the number:");
scanf("%d",&num);

while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if (rev==num){
printf("your number is pal :%d\n",rev);
}
else
{
printf("This is not\n");}
}






