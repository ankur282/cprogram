#include<stdio.h>
int main()
{
int num,i,a[6]={10,25,35,30,40,45},temp=0;
for(i=0;i<6;i++){
printf("the array is :%d\n",a[i]);
}
for(i=0;i<6;i=i+2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;

//printf("%d",temp);

}
printf("\n");

for(i=0;i<6;i++){
printf("the array is :%d\n",a[i]);
}



}


