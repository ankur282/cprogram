#include<stdio.h>
#include<string.h>

struct cricketer
{
    char name[20];
    int score;
    struct cricketer *next;
   
    
};

void main()
{
    struct cricketer c[3]={{"Kohli",105,c+1},{"Rohit",57,c+2},{"Gill",20,c}};

    struct cricketer *p;
    p=&c[0];
    printf("%s\n%d\n",p->name,p->score);
    p=p->next;
    printf("%s\n%d\n",p->name,p->score);
    p=p->next;
    printf("%s\n%d\n",p->name,p->score);
    //p=p->next;
    //printf("%s\n%d\n",p->name,p->score);


    
    

   
    
}
