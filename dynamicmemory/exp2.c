#include<stdio.h>
#include<stdlib.h>

void mani()
{
    int i,n1,n2;
    int *fp;
    printf("Enter size of list");
    scanf("%d",&n1);
    fp=(int *)malloc(n1*sizeof(int));

    printf("Enter %d numbers\n",n1);
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&fp[i]);
    }
    printf("the number inn list are:\n");
    for ( i = 0; i < n2; i++)
    {
        printf("%d\n",fp[i]);
    }

    printf("Enter new size of list:");
    scanf("%d",&n2);

    fp=realloc(fp,n2*sizeof(int));
    if (n2>n1)
    {
        printf("Enter %d number\n",n2-n1);
        for ( i = 0; i < n2; i++)
        {
            scanf("%d",&fp[i]);
        }
        
    }
    printf("The number in list are:\n");
    for ( i = 0; i < n2; i++)
    {
        printf("%d\n",fp[i]);
        
    }
    
    
    
}