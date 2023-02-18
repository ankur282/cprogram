#include<stdio.h>
int main()
{
int i,n,flag=0,count=0,num;

printf("Enter the number:");
scanf("%d",&n);
for(i=3;i<=n;i++){

	for(n=2;n<i;n++)
	{
	if(i%n==0)
	{
	flag=0;
	break;
	}
else{flag=1;}
	}
	if(flag==1){
	printf("This is prime number:%d \n",i);
	count=count+1;
	}

	

}
printf("count%d\n",count);


}




