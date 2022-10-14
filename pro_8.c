//write a program to test given number is positive or not
#include<stdio.h>
int main()
{
	int num;

	printf("enter num :");
	scanf("%d", &num);

	
	if(num > 0)
	{
		printf("num is positive.");
	}
	else
	{
		printf("num is negative.");

	}
	return(0);
}