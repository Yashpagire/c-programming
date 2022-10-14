/*print bellow pattern by using nested while loop   1
													1 2
													1 2 3
													1 2 3 4
													1 2 3 4 5 */

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
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
	}
		return(0);

}
