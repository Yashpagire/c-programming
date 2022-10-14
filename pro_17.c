//create a simple array and access its elements using differnt techniques
#include<stdio.h>
void main()
{
	int arr[] = {10, 11,12,13,14 };
	int i;

	/*accessing elements technique 1*/
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	/*accessing elements technique 2*/
	
	for (i = 0; i < 5; i++)
	{
		printf("%d", i[arr]);
	}
	printf("\n");
	/*accessing elements technique 3*/
	for (i = 0; i < 5; i++)
	{
		printf("%d", *(arr+i));
	}
}