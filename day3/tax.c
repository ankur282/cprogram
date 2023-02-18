#include<stdio.h>

float gs, sav, taxinc, tax;

int main()
{
printf("Enter your gross salary:");
scanf("%f",&gs);

printf("Enter your saving:");
scanf("%f",&sav);

taxinc=gs-sav;
//printf("tax income:%f\n",taxinc);

if (taxinc<100000)
{
printf("tax income:%f\n",taxinc);
printf("you have to no pay tax");
}


else if (taxinc>100000)
{
taxinc=gs-100000;


printf("tax income:%f\n",taxinc);

if(taxinc>=100000 && taxinc<=200000)
{
tax=(taxinc-100000)*0.1;
printf("your tax is:%f",tax);
}
else if (taxinc>200000 && taxinc<=500000)
{
tax=(100000)*0.1+(taxinc-200000)*0.2;
printf("your tax is:%f",tax);
}
else if (taxinc>500000)
{
tax=(100000)*0.1+(300000)*0.2+(taxinc-500000)*0.3;
printf("your tax is:%f",tax);
}
}

}

