#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    int yearofjoin;
    char depart[20];
    char course[20];
    
}s[450];
void isyear(struct student *s, int year, int n)
{
	int i;
	printf("\n\t\tYear of joining :%d\n\n", year);
	for (i = 0; i <= n; i++)
	{
		if (s[i].yearofjoin == year)
		{

			printf("\nrollno Number : %d",s[i].rollno);
			printf("\nName : %s", s[i].name);
			printf("\nDepartment : %s", s[i].depart);
			printf("\nCourse : %s\n", s[i].course);
		}

	}
}
void isroll(struct student *s, int roll, int n)
{
	int i;
	printf("\nroll number:%d", roll);
	for(i = 0; i <= n; i++)
	{
		if(s[i].rollno == roll)
		{
			printf("\nName : %s", s[i].name);
			printf("\nDepartment : %s", s[i].depart);
			printf("\nCourse : %s\n", s[i].course);
			printf("\nYear of joining : %d\n",s[i].yearofjoin);
		}
	}
}

void main()
{
    int n;
   
    printf("Enter the number of  students: ");
    scanf("%d",&n);
    struct student s[450];
    {
        printf("Enter details of student\n");
        for(int i=0;i<n;i++)
        {
            
            printf("rollno number of the student:");
            scanf("%d",&s[i].rollno);
            
            printf("name of the student:");
            scanf("%s",s[i].name);
            
            printf("year of joing:");
            scanf("%d",&s[i].yearofjoin);
           
            printf("departmnet:");
            scanf("%s",s[i].depart);
          
            printf("course:");
            scanf("%s",s[i].course);
            

        }
	};
    int fyear, froll;
	printf("\nEnter year of joining of the students:");
	scanf("%d", &fyear);
	isyear(s,fyear,n);
	
	
	printf("\nEnter the roll number of the studnet you want data:");
	scanf("%d", &froll);
	isroll(s,froll,n);
}
