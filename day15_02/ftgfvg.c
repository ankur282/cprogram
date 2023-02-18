#include<stdio.h>
#include<string.h>
 
int find(char *str1,char *str2)
{
int i,j,flag=0,count=0;
for(i=0;i<strlen(str1);i++)
    {
    for(j=0;j<strlen(str2);j++)
        {
        if(str2[j]!=str1[i+j])
        {flag=0;
        break;}
        else{flag=1;}
        }
    if(flag==1)
    {count=count+1;
    flag=0;}
    }
return count;
}
 
void main()
{
char str1[100],str2[100];
 
printf("enter string1: ");
scanf("%s",str1);
 
printf("enter the word you want to find: ");
scanf("%s",str2);
 
printf("frequency of given word is: %d\n",find(str1,str2));
}