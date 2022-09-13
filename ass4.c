/*print bellow pattern 11
					              * 22
					              * * 33
					              * *  * 44 */

#include<stdio.h>
int main()
{   
	int i, j;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		 
			if(i==j)
			{
				printf("%d%d", i, j);
			}
			else if(i>j)
			{
				printf("* \t");
			}
		printf("\n");
	}
}
