//print all numbers which are divisible by 3within range 1 to 50
#include<stdio.h>
int main()
{
	int i;
	for (i = 3; i <= 50; i = i + 3)
	{
		printf("\n%d", i);
	}
	return(0);
}