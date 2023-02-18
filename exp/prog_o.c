#include<stdio.h>

int main()
{
float height,cm,inches,meter;
printf("Enter your height in feet:");
scanf("%f",&height);

meter=height*0.3048;
cm=height*30.48;
inches=height*12;
printf("The coversion of %f feet height in meter is %f and centimeter is %f and inches is %f .",height,meter,cm,inches);


}
