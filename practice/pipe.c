#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>
#include<pthread.h>
int pipef[2];



void* start_one(void *arg)
{
   
    int value;
    while(1)
    {
    printf("start one writing for value to the pipe.\n");
    scanf("%d",value);
    if(write(pipef[1], &value, sizeof(int)) ==-1)
    {
        printf("fail to write into pipe\n");
        
    }
    sleep(1);
    }
    

}
void* start_two(void *arg)
{
    int rec_value;
    while(1)
    {
    
    if(read(pipef[0], &rec_value, sizeof(int))==-1)
    {
        printf("fail to read from pipe\n");
       
    } 
    printf("start two received value %d from the pipe.\n", rec_value);
 
    }

}



int main()
{

    pthread_t pt1,pt2;
    int returnvalue=pipe(pipef);
    
    if(returnvalue==-1)
    {
        printf("fail to create pipe\n ");
        return 1;
    }
   

    pthread_create(&pt1,NULL,start_one,NULL);
    pthread_create(&pt2,NULL,start_two,NULL);
    
    
    pthread_join(pt1,NULL);
    pthread_join(pt2,NULL);
    printf("End of main thread\n");
  
   

}
