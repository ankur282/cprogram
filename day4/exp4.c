#include<stdio.h>

int main()
{
int n,i,odd=0,even=0;
printf("Enter the number:");
scanf("%d",&n);

for (i=n;i<=n+20;i++)
{
if(i%2==0)
{
printf("%d,",i);
}
}
for (i=n;i<=n+20;i++){
if(i%2==1)
{printf("%d,",i);

}


}

}
