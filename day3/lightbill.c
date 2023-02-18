#include<stdio.h>

int main()
{
int type,phase;
float unit,bill=0,tax,total=0;
printf("Enter the type of purpose\n1 for domestic\n2 for commercial:");
scanf("%d",&type);



printf("Enter your unit:");
scanf("%f",&unit);

printf("Enter your phase\n1 for single-phases\n3 for three-phase:");
scanf("%d",&phase);

tax=0.06*unit;

if (type==1)//for domestic
{

if (unit>0 && unit<51)
{
bill=unit*1.45;
}
else if(unit>51 && unit<101)
{
bill=(unit-50)*2.85+(50*1.45);
}
else if(unit>101 && unit<201)
{
bill=(unit-100)*3.95+(50*1.45)+(50*3.95);
}
else if (unit>200)
{
bill=(50*1.45)+(50*2.85)+(100*3.95)+(unit-200)*4.50;

}
else
{
printf("please enter valid input:");
}

if(phase==1)
{
if (tax>20)
{
total=bill+10+tax;
}
else 
{
total=bill+10+20;
}

if(phase==3)
{
if (tax>50)
{
total=bill+10+tax;
}
else 
{
total=bill+10+50;
}
}
printf("%6.2f\n",bill);
}
}
if (type==2)//for commercial
{
if (unit>0 && unit<101)
{
bill=unit*3.95;
}

else if (unit>100)
{
bill=(100*3.95)+(unit-100)*7.00;

}
else
{
printf("please enter valid input");
}
if(phase==1)
{
if (tax>50)
{
total=bill+20+tax;
}
else 
{
total=bill+10+20;
}
if(phase==3)
{
if (tax>100)
{
total=bill+10+tax;
}
else 
{
total=bill+10+100;
}
}
}
//printf("%d\n",type);
printf("%6.2f\n",bill);
}
printf("the bill is:%6.2f\n",total);
}





