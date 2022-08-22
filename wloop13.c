//do addition of all even number 1 to 10 in while loop
#include<stdio.h>
int main()
{
	int i = 2;
	int sum = 0;

	while (i <= 10)
	{
		printf("%d", i);
		i = i + 2;
		sum =sum+i
	}

	printf("addition of all number from 1 to 10 is=%d", sum);

	return(0);
}