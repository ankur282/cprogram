#include<stdio.h>
void main ()
{
int a[4][4]={{0,1,1,0},{1,0,1,1},{0,0,0,0},{1,0,1,0}};
int i,j,sum_r=0,sum_c=0,id,jd;
for (i=0;i<4;i++)
{
sum_r=0;
for(j=0;j<4;j++)
{
sum_r=sum_r+a[i][j];
}
if(sum_r==0)
{
id=i;
}
}
for (j=0;j<4;j++)
{
sum_c=0;
for(i=0;i<4;i++)
{
sum_c=sum_c+a[i][j];
}
if(sum_c==3){jd=j;}
}printf("celibrity is: a[%d][%d]\n",id,jd);
}
