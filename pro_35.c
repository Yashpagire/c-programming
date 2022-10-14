/*A c program accept a string using scanf */
#include<stdio.h>
int main()
{
	char name[25];

	printf("enter name:");
	scanf("%s", name);

	printf("\nYOU ENTER:%s", name);
 }