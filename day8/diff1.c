#include<stdio.h>
void main()
{
    int a[5]={15,10,5,25,10},max,k,i,j,c[5],b[5],diff;
   
        for(i=0;i<5;i++)
        {
            max=-32768;
            if(i==0)
            max=a[i];
            for(j=i-1;j>=0;j--)
            {
                diff=a[i]-a[j];
                b[j]=diff;
            }
                for(k=0;k<i;k++)
                {
                    if(max<b[k])
                    max=b[k];
                }
                c[i]=max;
        }
                for(i=0;i<5;i++)
                    {
                        printf("Left Diff for %d is %d\n",i,c[i]);
                    }
}