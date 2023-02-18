#include<stdio.h>
#include<string.h>
void isupper(char *c)
{
    int count=0;
    for(int i=0;i<strlen(c);i++){
        if (c>='A' && c<='Z')
        {
            count=count+1;
        }
    }
        
        
        
    
    if(count==strlen(c))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    

 
    
}

void main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    isupper(str);
    
    

}

