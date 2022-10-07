//write a program which accept N from user & print all even number upto 10
#include<stdio.h>

int main()
{	//local varriable
	int n;

	printf("enter number n is:");
	scanf("%d", &n);


	void even(int);
	even(n);
	return(0);
} 
  void even(int num)
  {
	int i;
	for (i = 1; i <= num; i++)
	{
		if (i % 2==0)
		{
			printf("\t%d", i);
		}
	}

  }
 