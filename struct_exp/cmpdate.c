#include<stdio.h>
#include<string.h>

struct date
{
    int date;
    int month;
    int year;
    
}s[20];
void isdateq(struct date *s)
{
		if (s[0].date == s[1].date && s[0].month == s[1].month && s[0].year == s[1].year)
		{
            printf("Equal\n");
        }
        else
        {
            printf("unEqual\n");


        }

	
}

void main()
{
    
    struct date s[20];
    {
        printf("Enter date, month, year\n");
        for(int i=0;i<2;i++)
        {
            
            printf("Enter the date ");
            scanf("%d",&s[i].date);
            
            printf("Enter the month:");
            scanf("%d",&s[i].month);
            
            printf("Enter the year:");
            scanf("%d",&s[i].year);
        }
	};
    isdateq(s);
    
}
