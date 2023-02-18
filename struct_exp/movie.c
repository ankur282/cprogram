#include<stdio.h>
#include<string.h>

struct movie
{
    char title[20];
    char director[20];
    int reyear;
    int cost;
    int income;
};

void main()
{
     struct movie s[100],*P;
    {
        for(int i=0;i<3;i++)
        {
            rintf("Enter details of movie");
            printf("title of the movie:");
            scanf("%s",s[i].title);
            
            printf("name of the director:");
            scanf("%s",s[i].director);
            
            printf(" release year of the movie:");
            scanf("%d",&s[i].reyear);
           
            printf(" making cost:");
            scanf("%d",&s[i].cost);
          
            printf("income:");
            scanf("%d",&s[i].income);
            

        }
    };
    
    P=&s[0];
     for(int i=0;i<3;i++)
        {
            printf("Movie title is:%s\n\n",P->title);
            printf("Movie director name is:%s\n\n",P->director);
            printf("Movie release year is:%d\n\n",P->reyear);
            printf("Movie making cost is:%d\n\n",P->cost);
            printf("Movie income is:%d\n\n",P->income);
            P=P+1;
        }
    

    
    

   
    
}
