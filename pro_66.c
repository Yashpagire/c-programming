/*A c program to understand the usage of pointer to pointer */
#include<stdio.h>
int main()
{
	int var = 100;   /*variable*/
	int* p1;         /*pointer*/
	int** p2;         /*pointer to pointer */

	p1 = &var;
	p2 = &p1;

	/*p1 shows variable address ,*p1 its value */
	printf("\nvalue throughp1=%d", *p1);

	/*p2 shows p1 adress,*p2 shows content of p1 */
	printf("\nvalue through p2=%d", **p2);


	return(0);
 }