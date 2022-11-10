#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>


int main()
{
	pid_t pid = fork();
	int i;
	
	if(pid<0)
	{
		perror("Error creating child:");
		return -1;
	}
	
	else if (pid>0)
	{
		//parent
	}
	
	else
	{
		for(i=0;i<=10;i++)
		{
			printf("Child: %d\n",i);
		}
	}
	return 0;

}

