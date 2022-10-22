/*A c program to understand how to create and use a pointer */
#include<stdio.h>
void main()
{
	/*take int type variable */
	int v = 15;

	/*take int type pointer */
	int* pv;

	/*store memory address of v in pv */
	pv = &v;

	printf("\nvalue of v=%d", v);
	printf("\nvalue of pv=%d", pv);
	printf("\nvalue of *pv=%d", *pv);
 }