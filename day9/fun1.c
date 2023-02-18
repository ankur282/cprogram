#include<stdio.h>
char result();
void main()
{
    int marks;
    char g;
    printf("Enter the marks:");
    scanf("%d",&marks);
    g=result(marks);
    printf("The grade is:%c\n",g);
}

char result(int marks)
{
    int ans;
    
    if(marks<=100 && marks>80)
    {
        ans='A';

    }
    else if(marks<=80 && marks>60)
    {
        ans='B';

    }
    else if(marks<=60 && marks>50)
    {
        ans='C';

    }
    else if (marks<50)
    {
        ans='F';
    }

    return ans;

}