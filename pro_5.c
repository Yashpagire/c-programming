/*access the memory address of a variable and value of a variablr through a pointer*/
#include<stdio.h>
int main()
{
	int x = 100;
	int* p;
	p = &x;

	printf("\nmemory address=%p", &p);
	printf("\npointer refers %d", *p);
	return(0);
}
