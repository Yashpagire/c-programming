//do addition of all odd number 1 to 10 in while loop
#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;

	while (i < 100)
	{
		printf("%d", i);
		i = i + 2;
		sum = sum + i;
	}

	printf("addition of all number from 1 to 10 is=%d", sum);

	return(0);
}