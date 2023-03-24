#include<stdio.h>
void callback1(void)
{
	printf("Callback1 func called\n");
}
void callback2(void)
{
	printf("Callback2 func called\n");
}
void callback3(void)
{
	printf("Callback3 func called\n");
}
int main()
{
	printf("registering call back1\n");
	atexit(callback1);
	printf("registering call back2\n");
	atexit(callback2);
	printf("registering call back3\n");
	atexit(callback3);
	printf("main()..exiting now\n");
	exit(0);
}
