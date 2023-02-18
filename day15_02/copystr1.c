#include<stdio.h>
#include<string.h>
void mysrtcopy(char *s1,char *s2);
void main()
{
    char string[100],dest[100];
    printf("Enter the string:");
    scanf("%s",string);
    mysrtcopy(string,dest);
    printf("The copy str is:%s\n",dest);
    
    
}

void mysrtcopy(char *s1,char *s2)
{
   
    while (*s1!='\0')
    {
        
        *s2=*s1;
        s2++;
        s1++;

    }
}