//write a program by using function and print multiplication of two number
#include<stdio.h>
int main()
{
	//local varriable declaration
	int a = 20;
	int b = 10;
	int ans;

	//fun declaration
	int mul(int a, int b);

	//code
	ans = mul(a, b);
	printf("\nans=%d", ans);

	return(0);
}
int mul(int a, int b)
{
	//local varriable declaration
	int  multiplication;
	//code
    multiplication = a * b;

	return(multiplication);
}
