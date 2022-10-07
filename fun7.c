#include<stdio.h>
int main()
{
	//local varriable declaration
	float a = 10;
	float b = 3;
	float ans;

	//fun declaration
	float dev(int a, int b);

	//code
	ans = dev(a, b);
	printf("\nans=%f", ans);

	return(0);
}
 float dev(float a, float b)
{
	//local varriable declaration
	float devision;
	//code
	devision = a / b;

	return(devision);
}
