/*Swapping two numbers using pointers */
#include<stdio.h>
int main()
{
	void swap(int*, int*);   //func decl

   /*local variable*/
	int	a = 10;
   int	b = 5;
	printf("\nBefore swapping==>a=%d,b=%d", a, b);
	swap(&a,&b);
	printf("\nAfter swapping==>a=%d,b=%d", a, b);
	return(0);

}
void swap(int*a, int*b)
{
	int z = 0;
	z = *a;
	*a = *b;
	*b = z;
}