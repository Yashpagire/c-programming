/*Printf default size of pointer */
#include<stdio.h>
int main()
{
	int  *ptr1;
	char *ptr2;

	printf("\nsize of int pointer:%d", sizeof(*ptr1));
	printf("\nsize of char pointer:%d", sizeof(*ptr2));
}