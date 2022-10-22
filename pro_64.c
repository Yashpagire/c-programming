/*A c program to understand the creation and use of void pointer */
#include<stdio.h>
int main()
{
	char ch = 'A';
	int i = 100;

	/*declare a void pointer */
	void* ptr;
	/*void pointer to refer to char type variable */
	ptr = &ch;

/*convert void type into char type and display its value */
	printf("\nvoid pointer to char:%c", *(char*)ptr);

	/*now void pointer refers to int type variable */
	ptr = &i;

	/*convert void type into int type and display its content */
	printf("\nvoid pointer to int:%i", *(int*)ptr);
	return(0);
 }