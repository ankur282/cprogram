#include<stdio.h>
#include<string.h>
void main()
{
    char string[]="spark",dest[15];
    
    strcpy(dest,string);
    printf("copy of %s is %s\n ",string,dest);
}