//demostrate example of break
#include<stdio.h>
int main()
{
	int i;

	while (i<=10)
	{
		printf("%d", i);
		i++;

		if (i==7)
		{
			break;
		}

	}
	return(0);
}