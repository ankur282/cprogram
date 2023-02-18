#include<stdio.h>
#include<string.h>

struct student
{
    char name[10];
    int rollno;
};


void main()
{
    struct student s[100];
    {
        for(int i=0;i<3;i++)
        {
            printf("Enter the name of the student:");
            scanf("%s",s[i].name);
            printf("Enter the roll number of student:");
            scanf("%d",&s[i].rollno);
        }
    };
     for(int i=0;i<3;i++)
        {
            printf("the Rollnumber of the students:%d\n",s[i].rollno);
            printf("the Rollnumber of the students:%s\n",s[i].name);
            
        }
    


    
}