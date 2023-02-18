#include<stdio.h>

int main()
{

int ln,br,rad,para_r,para_cir,are_r,are_cir;

printf("Enter the length of ractangle:");
scanf("%d",&ln);

printf("Enter the breadth of ractangle:");
scanf("%d",&br);

printf("Enter the radius of circle:");
scanf("%d",&rad);

para_r=2*(ln+br);
para_cir=2*3.14*rad;

are_r=ln*br;
are_r=3.14*rad*rad;

printf("the area of ractangular is:%d\ncircle:%d\nthe circumference of the rectangular is:%d\nand of circle is:%d",are_r,are_cir,para_r,para_cir);
}
