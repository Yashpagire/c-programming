/*A c program to understand the usage of register variable */
#include<stdio.h>
void main()
{
	register int i;
	for (i = 0; i < 10; i++)
		printf("\n%d", i);
  }