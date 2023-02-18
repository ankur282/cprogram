#include<stdio.h>
#include<string.h>
void main()
{
    char string[]="spark";
    int len1;
    len1=mystrlen(string);
    printf("length of %s %d",string,len1);
}
int mystrlen(char *s)
{
    int len=0;
    while (*s!='\0')

    {
        len++;
        s=s+1;
    }
    return len;
    
}