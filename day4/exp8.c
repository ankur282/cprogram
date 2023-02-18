#include<stdio.h>

int main()
{
int n=1,code,price=0,qua;

while(n!=0)
{


printf("Burger     (150$):  code=101\n");
printf("Pizza        (200$): code=102\n");
printf("Vadapav  (30$):   code=103\n");
printf("Sandwich (100$): code=104\n");

printf("Press 1 for continue\n press 0 for bill: \n");
scanf("%d",&n);
if(n==0){break;}

printf("Enter the code:");
scanf("%d",&code);

printf("Enter the quantity:");
scanf("%d",&qua);



if(code==101)
{
price=price+150*qua;
}
else if(code==102)
{
price=price+200*qua;
}
else if(code==103)
{
price=price+30*qua;
}
else if(code==104)
{
price=price+100*qua;
}
}



printf("the bill is:%d\n",price);



}
