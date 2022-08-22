//print addition of all no 1to10 in while loop
#include<stdio.h>
int main()
{
	int i=1;
	int sum=0;
	while (i <= 10)
	{
		printf("\n%d", i);
		i++;
		sum = sum + i;
	}

	printf("\n%d", sum);


	return(0);
}