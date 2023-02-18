#include<stdio.h>
int main()
{
int nholi,idate,dateholi,final;
printf("Enter the no of holidays");
scanf("%d",&nholi);
final=8+nholi;
for(i=0,i<nholi,i++)
{
printf("Enter the date of holidays:");
scanf("%d",&dateholi);

switch(dateholi){
case 6;
case 7;
case 13;
case 14;
case 20;
case 21;
case 27;
case 28;
final=final-1;
break;
}
}
printf("The holiday:%d"\n,final);
}

