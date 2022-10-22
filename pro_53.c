/*To find smallest element in an array elements using pointers */
#include<stdio.h>
int main()
{
	int i, n, small, * ptr, a[50];

	printf("\nHow many elements?");
	scanf("%d", &n);

	printf("\nenter elements:");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	/*store first element address in ptr */
	ptr = a;

	/*take first element as small element initially */
	small = *ptr;

	/*increment the pointer so that it refers to the second element,i.e,a[i]  */
	ptr++;

	/*loop n-1 times to search for smallest element */
	for (i = 1; i < n - 1; i++)
	{
		if (*ptr < small)
			small = *ptr;
		ptr++;
	}
	printf("\nsmallest element =%d", small);
	return(0);
 }