/*Write a recursive function to calculate factorial value*/
#include<stdio.h>
long int factorial(int n)
{
	long int result;

	if (n == 0)
		result = 1;
	else
		result = n * factorial(n - 1);
	return(result);
}
  void main()
{
	int j;

	for (j = 0; j < 10; j++)
	{
		printf("factorial%d=%ld\n", j, factorial(j));
	}

}