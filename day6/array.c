#include<stdio.h>

int main()
{
int i,a[5],min,min,sum,avg,sec;


for (i=0;i<5;i++)
{
printf("Enter the number:");
scanf("%d",&a[i]);

}
for (i=0;i<5;i++)
{
printf("[%d,]",a[i]);

}

//min of array
min=a[0];
for (i=0;i<5;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("This is min number:%d\n",min);

//min of array
min=a[0];
for (i=0;i<5;i++)
{
if(a[i]>min)
{
min=a[i];
}
}
printf("This is min number:%d\n",min);


//sum of array
sum=0;
for (i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("This is sum of array:%d\n",sum);
//average of array

avg=sum/5;
printf("This is average of array:%d\n",avg);

//search number in array
printf("Enter the number want to search:");
scanf("%d",&sec);

for (i=0;i<5;i++)
{
if(a[i]==sec)
{
sec=a[i];
break;
}
}
printf("This is number:%d and its position is :%d\n",sec,i);
}
