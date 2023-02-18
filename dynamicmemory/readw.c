#include<stdio.h>

void main()
{
    char ch,ch1;
    FILE *fp;
    FILE *fp1;
    int f=0;

    fp =fopen("ana.txt","r");
    fp1 =fopen("ana1.txt","r");
    while (ch!=EOF || ch1!=EOF)
    {
        ch = getc(fp);
        ch1 = getc(fp1);
    
    if (ch!=ch1)
    {
        f=1;
    }
    
    
}
if (f==0)
printf("same:");
if (f==1)
printf("not same:");


}