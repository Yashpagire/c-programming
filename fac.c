//find factorial
#include<stdio.h>
int main()
{
	//local variable
	long int n, ans = 1;
	

	//code
	printf("enter the number:");
	scanf("%d", &n);

	

	while (n > 1)
	{
		ans = ans * n;
		n--;
	}
	printf("\n factorial of %d", ans);
	return(0);
 }0