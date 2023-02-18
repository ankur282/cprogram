#include<stdio.h>
#include<string.h>

bool Attendance(char *str1)
{
int i,count_a=0,count_l=0; for(i=0;i<strlen(str1);i++)
{
    if(str1[i]=='l' && str1[i+1]=='l' && str1[i+2]=='l')
    {
        count_l=count_l+1;
        break;
        }
        if(str1[i]=='a')
count_a=count_a+1;
}
}
if(count_a>1 ||count_l>0){return false;}
else{return true;}
}

void main()
{
char str1[100]; printf("enter string1: ");
scanf("%s",str1);
printf("%s\n",Attendance(str1)?"true":"false");
}