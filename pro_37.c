/*To find number of charecters in a string */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int n;

	printf("\nEnter string:");
	gets(str);

	n = strlen(str);

	printf("\n%d", n);

	return(0);
 }