#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	//local variable declaration
	int* p = NULL;
	int* temp = NULL;
	int num = 0;

	//code
	printf("\n Enter value:");
	scanf("%d", &num);

	p =(int*) malloc(4 * sizeof(int));
	if (p == NULL)
	{
		printf("\n memory allocation failed");
		exit(1);
	}
	 //write
	for (int i = 0; i < 4; i++)
	{
		p[i] = (i + 1) * num;
	}
	temp = realloc(p, 6 * sizeof(int));
	if (temp == NULL)
	{
		printf("no more memory available");
	}
	p = temp;
	p[4] = 25;
	p[5] = 30;
	//read
	for (int i = 0; i < 6; i++)
	{
		printf("\n%d", p[i]);
	}
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	return(0);
 }