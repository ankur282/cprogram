#include<stdio.h>
void scanarray(int a[],int n);
void printf(int b[],int n;
void main()
{
    int a[5];
    int b[5];
    scanarray(a[],5);
    scanarray(b[],5);
    printarray(a[],5);
    printarray(b[],5);

}

void scanarray(int a[],int n)
{
    int i;
    printf("Enter the data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);


    }
}

void printarray(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        printf("%d",b[i]);
    }
}