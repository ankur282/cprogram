#include<stdint.h>
void main()
{
    int x,y,z;
    printf("Enter the x:");
    scanf("%d",&x);
    printf("Enter the y:");
    scanf("%d",&y);

    z=sq1(x,y);
    printf("The power is:%d",z);
    sq2(x,y);


}

int sq1(int x,int y)
{
    int ans=1,i;
    for(i=0;i<y;i++)
    {
        ans=ans*x;

    }
    printf("X power y is %d",ans);
}


int sq2(int x,int y)
{

    int ans;
    for(int i=0;i<y;i++)
    {
        ans=ans*x;
    }
return ans;
}