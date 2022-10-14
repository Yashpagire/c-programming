/*To convert a string into upper and lowercase letter */
#include<stdio.h>
#include<string.h>
void main()
{
	char string[200];

	printf("\nEnter a string:");
	gets(string);

	puts("\nIn uppercase:");
	puts(strupr(string));

	puts("\nIn lowercase:");
	puts(strlwr(string));


 }