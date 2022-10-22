/*In this program,we allocate dynamic memory for a 1d array of integer numbers */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr[50];
	int i, n;

	printf("\n how many elements?");
	scanf("%d", &n);

	printf("\n enter elements:");
	for (i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int));
		scanf("%d", arr[i]);
	}
	printf("\n array elements:");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *arr[i]);
	}
}