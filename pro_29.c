/*To test whether a given number is prime or not */
#include<stdio.h>
int main()
{
	int num, result;
	printf("\nEnter a number:");
	scanf("%d", &num);

	result = isprime(num);
	if (result == 1)
	{
		printf("\n%dis prime", num);
	}
	else
	{
		printf("\n%d is not prime", num);
	}
	return(0);
}
int isprime(int n)
{
	int i, flag = 1;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return(flag);
  }