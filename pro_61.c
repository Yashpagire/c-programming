/*A c program with a function that accepts and return a string using pointers */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* function(char* n)
{
	char *s1 = "hello";
	/*attach n at the end of s1*/
	strcat(s1, n);
	return(s1);
}
void main()
{
	/*allocate 20 bytes for name*/
	char* name;
	name = (char*)malloc(20);

	printf("enter your name:");
	gets(name);

	/*call the function and display returned string*/
	printf("%s", function(name));
}
 