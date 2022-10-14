//write a program to find the sum of digits of number
#include<stdio.h>
int main()
{
	int num, digit, sum = 0;

	printf("enter num:");
	scanf("%d", &num);

	do {
		digit = num % 10;
		sum = sum + digit;
	  	num = num / 10;
	} while (num > 0);
	printf("\nthe sum of digit=%d", sum);
}