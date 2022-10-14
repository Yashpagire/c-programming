/*print bellow pattern by using nested while loop   *
													  *
													    *
														  *
														    *   */
#include<stdio.h>
int main()
{
	// local variable declaration
	int i = 1, j;
	//code
	while (i <= 5)
	{
		j = 1;
		while (j <= 5)
		{
			if (i == j)
			{
				printf("*");

			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return(0);
}
