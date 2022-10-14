//To terminate a do while loop using break.
#include<stdio.h>
int main()
{
	int i = 1;
	do {
		printf("%d", i);
		i++;
		if (i > 5)
			break;
	} while (1);
	return(0);
}