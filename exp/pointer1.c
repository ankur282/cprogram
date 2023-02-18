#include<stdio.h>
void f1(int *p,int r);
void main()
{
    int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    f1(a,3);

    
}
void f1(int *p,int r)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",*(p+(i*r)+j));
            printf("\n");
        }
    }
}