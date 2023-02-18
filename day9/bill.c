#include<stdio.h>
int calc_bill(int code,int q)
{
    int bill=0,price=0;
    if(code==101)
    {
        price=150;

    }
    if(code==102)
    {
        price=100;
    }
    bill=q*price;
    return bill;
}
void main()

{
    int code,q,total;
    printf("Enter the code(101 || 102):");
    scanf("%d",&code);

    printf("Enter the qua:");
    scanf("%d",&q);

    total=calc_bill(code,q);
    printf("the billis:%d\n",total);
    
}
