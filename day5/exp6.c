#include<stdio.h>
int main()
{
int i,n,flag=0;

printf("Enter the number:");
scanf("%d",&n);

for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=0;
break;
}
}

if(flag==1){
printf("This is prime number: ");
}
else {
printf("This is not prime:");
}
}




