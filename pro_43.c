/*To know the first positive of a character in a string */
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100], ch;
	char* n;

	printf("\nEnter a string:");
	gets(str);

	printf("\nenter a charecter:");
	//ch = getchar();
	scanf("%c", &ch);

	/*find the address of ch in str */
	n = strchr(str, ch);
	if (n == NULL)
		printf("\nThe charecter is not found");
	else
		printf("\nthe first occurrence is %d", n - str);
  }