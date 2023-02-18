#include<stdio.h>
#include<string.h>

void main()
{
    char string1[50],string2[50];
    int cmp;
    printf("Enter the string:");
    scanf("%s",string1);
    printf("Enter the string:");
    scanf("%s",string2);

    cmp=strcmp(string1,string2);
    if(cmp>0)
    printf("%s > %s\n",string1,string2);
    else
    {
        if(cmp<0)
        printf("%s < %s\n",string1,string2);
        else
        printf("%s = %s\n",string1,string2);
    }

}