#include<stdio.h>

int main()
{
int km,meter,cm;
float feet,inches;
printf("Enter the distance in km:");
scanf("%d",&km);

cm=km*100000;
feet=km*3280.84;
inches=km*39370.1;
meter=km*1000;
printf("The km to cm is:%d\nfeet is:%f\ninches is:%f\nmeter is:%d",cm,feet,inches,meter);

}



