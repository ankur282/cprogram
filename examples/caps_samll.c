#include <stdlib.h>
#include <string.h>
#include<stdio.h>
char *changeL(char *s);
char *changeL(char *s)
{
    char *upper = s;

    for (int i = 0; upper[i] != '\0'; i++)
    {
       if (upper[i] >= 'A' && upper[i] <= 'Z')
        {
           upper[i] = upper[i]+32;;
        }
     }
   //printf("%s\n", upper);
   return upper;
}



int main()
{
    char first[] = "HELLO My Name is LoL";
    char *second;
    //first = "HELLO My Name is LoL";
    //char buffer[] = "HELLO My Name is LoL";
    printf("%s\n", first);
    second = changeL(first);
    printf("There is no error here\n\n");
    printf("%s\n", second);



    return 0;
 }