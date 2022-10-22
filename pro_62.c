/*A c program to understand how to create and use function pointer */
#include<stdio.h>
void sum(int a, int b)/*define a function*/
{
	printf("\nsum=%d", a + b);

 }
void main()
{
	/*declare a function pointer */
	void(*fp)(int a, int b);

	/*store function address in function pointer*/
	fp = sum;

	/*call function using function pointer */
	(*fp)(5, 10);
	fp(5, 10);
  }