#include<stdio.h>

int main()
{
int share,qua,buy_p,sell_p,total=0,i,out;


printf("How many share you have:");
scanf("%d",&share);

if(share<=0)
{
printf("buy some share");


}
else
{
for(i=1;i<=share;i++)
{
printf("Enter the buying price:");
scanf("%d",&buy_p);

printf("Enter the quantity of  share :");
scanf("%d",&qua);

printf("Enter the selling price:");
scanf("%d",&sell_p);
total=total+(sell_p*qua-buy_p*qua);
}
(total>0)?(printf("you are in profit")):((total==0)?printf("NO profit No loss"):(printf("you are in loss")));
printf("is: %d",total);
}

}



