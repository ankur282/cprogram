#include<stdio.h>
#include<string.h>

int isfindfreq(char *c,char *w)
{
    int i,j,count=0,f=0;
    for(i=0;i<strlen(c);i++)
    {
        for(j=0;j<strlen(w);j++)
        {
            if(w[j]!=c[i+j])
            {f=0;
            break;}
            else
            {f=1;} 
        }
        if(f==1)
        {
        count=count+1;
        f=0;}
    }
return count;
}

void main()
{
    int a[100],string[100],ans;
    printf("Enter the string:");
    scanf("%s",string);

    printf("Enter the word to find:");
    scanf("%s",a);

    ans=isfindfreq(string,a);
    printf("%d",ans);

}