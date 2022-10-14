/*To take a 2d array with 3 rows and 5 columns and display elements matrix form*/
#include<stdio.h>
void main()
{
	int i, j;
	int yash[3][5] = { {50,60,70,80,90},
					{55,65,75,85,95	},
					{59,69,79,89,99} };

	/*display in matrix form.
	outer for loop represent row
	inner for loop represent coloumns*/
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("\t%d", yash[i][j]);
		}
		printf("\n");
	}
}