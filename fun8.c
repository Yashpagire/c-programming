//write a program by using function and print maximum number
#include<stdio.h>
int main()
{
	//local varriable declaration
	int n1 = 20;
	int n2 = 10;
	int max;
	//fun declaration
	int maximum(int n1, int n2);
	//code
	max = maximum(n1, n2);
	printf("\n%d", max);
    
	return(0);
}
int maximum(int n1, int n2)
{
	int maximum;
	if (n1 > n2)
	{
		printf("n1 bigger than n2");
	}
	else
	{
		printf("n2 bigger than n1");
	}
	return(maximum);
}