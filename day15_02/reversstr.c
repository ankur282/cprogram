#include<stdio.h>
#include<string.h>

char isreverse(char *c, int k)
{
    int temp=0;
    if(k>strlen(c))
    {
        k=strlen(c);
    }
    for(int i=0;i<k;i++)
    {
        temp=c[i];
        c[i]=c[k-1];
        c[k-1]=temp;
        k=k-1;

    }




}




void main()
{
    char s[100];
    int k;
    printf("Enter the string:");
    scanf("%s",s);

    printf("Enter the char you want to reverse:");
    scanf("%d",&k);
    isreverse(s,k);

    printf("The reverse strring is:%s\n",s);

}