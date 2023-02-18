#include<stdio.h>
void f1(int *p);
void f(int *p);
void main()
{
    int a[5];
    f(a);
    printf("\n");
    f1(a);

}

void f1(int *p)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
        p=p+1;
    }
    

}

void f(int *p)
{
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",p);
        p=p+1;
    }
}
