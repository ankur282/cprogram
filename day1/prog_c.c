#include<stdio.h>


int main()
{
int sci,math,guj,san,eng;
float sum, per;
printf("Enter the marks with space:\n");
scanf("%d%d%d%d%d",&sci,&math,&guj,&san,&eng);

sum=sci+math+guj+san+eng;
per=sum/5;
printf("The sum of the subject :%f\n persentage is: %f",sum,per);



}
