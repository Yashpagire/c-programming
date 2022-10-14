/*A c program to read a string using gets() and display it by reading charecter by charecter from memory */
#include<stdio.h>
void main()
{
	char name[15];
	int i = 0;
	printf("\n enter name:");
	gets(name);

	printf("\nDisplaying as as string:%s", name);
	printf("\nDisplaying charecter wise:");

	while (name[i] != '\0')
		putchar(name[i++]);
 }