#include<stdio.h>
int main()
{
int no_que, cor_mark, inc_mark, no_cque, marks, total_m;
float per;

printf("Enter the number of question in exam:");
scanf("%d",&no_que);

printf("Enter the correct answer:");
scanf("%d",&cor_mark);

printf("Enter the incorrect answer:");
scanf("%d",&inc_mark);

printf("Enter the number of correct question attend:");
scanf("%d",&no_cque);

marks=((no_que*no_cque)-(inc_mark*(no_que-no_cque)));
total_m=no_que*cor_mark;
per=marks/total_m*100;

printf("the marks is%d",marks);
printf("the total marks is%d",total_m);
printf("the persentege is %f",per);
if (per>50)
{printf("student is pass");
}
else
{
printf("student is fail");
}

}
