#include<stdio.h>

int main()
{
int i,num=0,rev=0,rem=0,temp=0,num1,count=1,number=0;
printf("Enter the number:");
scanf("%d",&num);
temp=num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}

if (rev==temp){
printf("your number is pal :%d\n",rev);
}
else
{
rev=0;
num1=temp/10;
while(num1>0)
{
rem=num1%10;
rev=rev*10+rem;
num1=num1/10;
count=count*10;

}
number=(temp*count)+rev;
//printf("%d",count);
//printf("%d",temp);
printf("This  not:%d\n",number);
}
}

