#include<stdio.h>
#include<string.h>

int main()
{
    const char str[] = "linuxkernel.com";
    const char ch = '#';

    printf("String before set/ initialization is %s \n",str);

    memset(str+8,ch,5);
    printf("Starting after set is %s \n",str);

    return 0;
}