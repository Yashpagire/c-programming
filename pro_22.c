/*write a c program to accept a matrix and display its transpose matrix*/
#include<stdio.h>
void main()
{
	//local variable declarartion
	int i, j, r, c;
	int matrix[50][50];
	//code
	printf("\nenter r and c:");
	scanf("%d%d", &r, &c);

	printf("\nEnter matrix:\n");

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &matrix[i][j]);

	/*display the transpose*/
	printf("\nTranspose matrix is:\n");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			printf("%d\t", matrix[j][i]);
		}
		printf("\n");
	}
}