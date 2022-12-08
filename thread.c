//Program to creat a thread and print 10 numbers in a loop inside the thread.

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *test();

int main()
{
	pthread_t tid;
	pthread_attr_t attr;
	pthread_attr_init( &attr );
	
	pthread_create( &tid, &attr, test, NULL);
	pthread_join(tid, NULL);
	
	printf("Exiting main thread\n");
	return 0;
}


void *test()
{
	int i;
	for(i=0; i<10; i++)
	{
		sleep(1);
		printf("thread(1) i=%d\n", i);
	}
	pthread_exit(NULL);
}
