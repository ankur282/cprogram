#include<stdio.h>
#include<stdio.h>

int size =0,array[100];

void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *b=temp;

}


void heapify(int array[],int size,int i)
{
    if(size==1)
    {
        printf("Single element in the heap:");

    }
    else
    {
        int largest = i;
        int l=2*i+1;
        int r=2*i+2;

        if (l<size && array[l]>array[largest] )
        {
            largest=l;
            
        }
        if (r<size && array[r]>array[largest] )
        {
            largest=r;
           
        }
        if (largest!=i)
        {
            swap(&array[i],&array[largest]);
            
        }
    }
}

void insert(int array[],int newNum)
{
    int i;

if(size==0)
{
    array[0]=newNum;
    size=size+1;
}
else
{
    array[size]=newNum;
    size=size+1;
    for(i=size-1;i>=0;i--)
    {
        heapify(array,size,i);
    }
}
}


void main()
{
    int num=0;
    while (num!=-1)
    {
        printf("Enter the value:");

        scanf("%d",&num);
        

        if(num!=-1)
        {
        insert(array,num);
        }
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        
        printf("the array tree is:%d\n",array[i]);
    }
}