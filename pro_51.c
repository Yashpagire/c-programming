/*swap two numbers without using pointer */
#include<stdio.h>
int a = 10;
int b = 5;
 int main()
{


	void swap(int a, int b);
	printf("\nBefore swapping==>a=%d,b=%d", a, b);
	swap(a, b);
	printf("\nAfter swapping==>a=%d,b=%d", a, b);
	return(0);
 }
 void swap()
{
	int z = 0;
	z = a;
	a = b;
	b = z;
  }