#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    switch (n)
    {
    case 1:

        /* code */
        printf("Result = one\n");
        break;
    case 2:

        /* code */
        printf("Result = two\n");
        
    
    case 3:
        /* code */
        printf("Result = three\n");
        break;
    
    default:

        printf("Invalid");
        break;
    }
    return 0;

}
