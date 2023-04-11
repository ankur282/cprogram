#include<stdio.h>
#include<fcntl.h>
#define BUF_SIZE 1024

int main(int argc , char*argv[])
{
	int inputFD,outputFD,openFlags;
	mode_t filePerms;
	ssize_t numRead;
	char buf[BUF_SIZE];

	inputFD =open(argv[1],O_RDONLY);
	if(inputFD==-1)
	{
		printf("Open error\n");
		return;
	}
	outputFD =open(argv[2],O_CREAT|O_RDWR,777);
	if(outputFD ==-1)
	{
		printf("Opening file\n");
		return;
	}
	while(numRead = read(inputFD,buf,BUF_SIZE))
	{
		if(write(outputFD,buf,numRead)!=numRead)
		{
			printf("Write Error\n");
			return;
		}
		printf("%d\n",numRead);
	}
	if(numRead==-1)
	{
		printf("Read Error\n");
		return;
	}	
	if(close(inputFD)==-1)
	{
		printf("Close input\n");
		return;
	}
	if(close(outputFD)==-1)
	{
		printf("Close output\n");
		return;
	}
	
}	
