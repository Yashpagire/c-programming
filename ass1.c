/*print bellow pattern 11
					             11 11
					             11 11 11
					             11 11 11 11 */

#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++) 
			if (i >= j)
			{
				printf("11\t");

			}
			else
			{
				printf("  ");
			}
	printf("\n");
			
		
	}
}
