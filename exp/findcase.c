#include<stdio.h>

int main()
{

char x;
printf("Enter the charecter:");
scanf("%c",&x);

if (x>64 && x<90)
{
printf(" %c is in uppercase",x);

}
else if (x>58 && x<123)
{
printf("%c is in lowercase",x);

}
else if(x>47 && x<58) 
{
printf("%c is digit",x);
}
else
{
printf("invalid input");
}

}
