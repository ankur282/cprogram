#include<stdio.h>

int main()
{
int n,rem=0,hnum=0,temp=0;
printf("Enter your number :");
scanf("%d",&n);

temp=n;

while(hnum!=1 && hnum!=4)
	{
	hnum=0;
	while(n>0)
	{
	rem=n%10
	hnum=hnum+(rem*rem);
	n=n/10;
	}
	n=hnum;
	
	}
if(hnum==1)
{
printf("This is happy number:%d",hnum);
}
else
{
printf("This is not:");
}

}
