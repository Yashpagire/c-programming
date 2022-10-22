/*A program to access the elements of a 1D array using pointer */
#include<stdio.h>
int main()
{
	int arr[5] = { 10,20,30,40,50 };

	/*to store the starting address into ptr */
	int* ptr = arr;
	int i;

	printf("\naccessing element array name:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);

	}
	printf("\naccessing element pointer:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", *ptr++);
	}
	return(0);
 }