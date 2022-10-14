//write a c program to generate fibonacci number series
#include<stdio.h>
int main()
{
	int n, c, i;
	int  a;
	int b;
	printf("enter no of term:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", a);
		c = a + b;
		a = b;
		b = c;
	}
	return(0);
}