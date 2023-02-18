#include<stdio.h>

void main()
{
    char ch;
    FILE *fp;
    FILE *fp1;
    

    fp =fopen("ana.txt","r");
    fp1 =fopen("ana1.txt","w");
    do
    {
        ch=getc(fp);
        putc(ch,fp1);
    } while (ch!=EOF);
    fclose(fp);
    fclose(fp1);
    
    printf("Filed copied ");
    
}










