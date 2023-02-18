#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void isana(char *s1, char *s2)
{
    int count=0,flag=0;
    
    for (int  i = 0; i <strlen(s1); i++)
    {
        for (int j = 0; j<strlen(s2); j++)
        {
           if(s1[i]==s2[j] && strlen(s1)==strlen(s2)) 
           {
            count=count+1;
           }
        //    if (s1[i]==s2[j] && strlen(s1)==strlen(s2))
        //    {
        //     flag=1;
        //    }
           
            
        }
}
if(count==strlen(s1) && count==strlen(s2))
{
    printf("This is anagram:");
}
else
{
    printf("This is not anagram:");
}
}








void main()
{
    char str1[10],str2[10];
    printf("Enter the string 1:");
    scanf("%s",str1);

    printf("Enter the string 2:");
    scanf("%s",str2);

    isana(str1,str2);



    



}