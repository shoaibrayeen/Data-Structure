#include<stdio.h>
int main()
{
	system("clear");
	int pid=fork();
	int pid1,i,s;
	if(pid==0)
	{
		int pid1=fork();
		if(pid1==0)
		{
			printf("\nGrandchild Id\t:\t%d\nChild Id\t:\t%d\n",getpid(),getppid());
		}
		else
		{
			wait((void*)&s);
			printf("\nChild Id\t:\t%d\nParent Id\t:\t%d\n",getpid(),getppid());
		}
	}
	else
	{
		wait((void*)&s);
		printf("\nParent Id\t:\t%d\nGrandParent Id\t:\t%d\n",getpid(),getppid());
	}
}
