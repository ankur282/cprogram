#include<stdio.h>
int main()
{
    int ret;
    ret = execl("/usr/bin/vim","vim","INfo1.txt",0);
    if (ret == -1)
    {
        printf("execl retured error %d\n",ret);
       
    }
    
}