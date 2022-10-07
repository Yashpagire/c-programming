//write a program by using function and print minimum number
#include<stdio.h>
int main()
{   
	//local varriable declaration
	int a = 10;
	int b = 20;
	int min;
	
    //fun declaration
	int minimum(int a, int b);
	//code
	min = minimum(a, b);
	printf("%d", min);
	return(0);
}
int minimum(int a, int b)
{   
	//local varriable declaration
	int minimum;
	//code
	if (a < b)
	{
		printf("a smaller than b");
	}
	else
	{
		printf("b smaller than a");
	}
	return(minimum);
}
 