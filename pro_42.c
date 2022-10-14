/*A c program to test whether a given string is palindrome or not */
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50], str2[50];

	printf("\nenter a word");
	gets(str1);

	//preserve str1 in str2
	strcpy(str2, str1);

	if (stricmp(str2, strrev(str1)) == 0)
		puts("It is a palindrome");
	else
		puts("It is not a palindrome");
}