/*print bellow pattern by using nested while loop   1
													2 2
													3 3 3
													4 4 4 4
													5 5 5 5 5 */

#include<stdio.h>
int main()
{
	// local variable declaration
	int i = 1, j;
	//code
	while (i <= 5)
	{
		j = 1;

		while (j <= i)
		{
			printf("%d", i);
			j++;
		}
		printf("\n");
		i++;
	}
	return(0);

}
