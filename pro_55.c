/*Access the elements of 2D array using pointers */
#include<stdio.h>
int main()
{
	int arr[][4] = { {1,2,3,4},
		             {5,6,7,8},
		             {9,10,11,12} };
    
	/*declare pointer and store the first elements address */
	int* ptr = &arr[0][0];

	int i, j;

	printf("\naccessing elements using array name:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", *(*(arr + i) + j));
		}
		printf("\n");
	}
	printf("\naccessing elements using pointer:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", *ptr++);
		}
		printf("\n");
	}

}