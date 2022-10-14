//this program helps us to understand the use of continue in a for loop
#include<stdio.h>
void main()
{
	int i;
	for (i = 10; i >= 1; i--)
	{
		printf("\nbefore continue:");
		if (i > 5)
		{
			continue;
		}
		printf("%d", i);
	}
}