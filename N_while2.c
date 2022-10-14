/*print bellow pattern by using nested while loop   *
													**
													***
													****
													*****   */
#include<stdio.h>
int main()
{
	// local variable declaration
	int i=1, j;
	//code
	while (i <= 5)
	{
		j = 1;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return(0);
}
