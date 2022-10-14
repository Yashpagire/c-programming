//to find the factorial value of a given number
#include<stdio.h>
int main()
{
	int i, n;
	long int fact = 1;

	printf("\nenter a positive integer: ");
	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("\n factorial of %d is %ld.", n, fact);

	return(0);
}