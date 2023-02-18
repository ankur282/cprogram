#include<stdio.h>
#include<string.h>

typedef struct point
{
    
    int x,y;
}point;

point sum(point A, point B)
{
    point tmp;
    tmp.x=A.x+B.x;
    tmp.y=A.x+B.y;
    return tmp;
}

void main()
{
    point p1,p2;
    p1.x=10;
    p2.x=50;
    p1.y=10;
    p2.y=60;

    point p3=sum(p1,p2);
    printf("%d\n",p3.x);
    printf("%d\n",p3.y);

}