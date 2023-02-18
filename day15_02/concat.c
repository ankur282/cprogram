#include<stdio.h>
#include<string.h>
void concat(char *s1,char *s2);
void main()
{
    char string[100],dest[100];
    printf("Enter the 1st string:");
    scanf("%s",string);
    printf("Enter the 2nd string:");
    scanf("%s",dest);
    concat(string,dest);
    printf("The concat str is:%s\n",string);
    
    
}

void concat(char *s1,char *s2)
{
    int c=0;
    while (*s1!='\0')
    {
        //c=c+1;
        s1=s1+1;
         //printf("%d %s",c,s1);
    }
  
    while (*s2!='\0')
    {
        
        s1[c]=*s2;
        s2=s2+1;
        c=c+1;
        //printf("%d %s",c,s1);
    }

    
    

   
    
}