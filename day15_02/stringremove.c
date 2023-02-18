#include<stdio.h>

int isalphabet(char c)
{
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
    {
    return 1;
    }
    else
    return 0;


}

void main()
{
    char a[50]="hello123huiii12344",i;
    // printf("Enter the string:");
    // scanf("%c",a);
    

    for(i=0;i<strlen(a);i++)
    {
        //printf("%c",a[i]);
        if(isalphabet(a[i])==1)
        {
             printf("%c",a[i]);
         }
    }

}