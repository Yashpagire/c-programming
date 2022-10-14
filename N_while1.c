/*print bellow pattern by using nested while loop  * * * *
												   * * * *
												   * * * *
												   * * * *     */
#include<stdio.h>
int main()
{

	//local variable declaratio

	int i = 1, j;
	//code

	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	return(0);
}