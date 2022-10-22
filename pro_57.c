/*in this program,we allocate dynamic memory for two float numbers and find their sum */
#include<stdio.h>
#include<stdlib.h>

void main()
{
	float* n1, * n2, * sum;  /*pointer*/

	/*alloacte memory dynamically*/
	n1 = (float*)malloc(sizeof(float));
	n2 = (float*)malloc(sizeof(float));
	sum= (float*)malloc(sizeof(float));

	/*store values into thease loaction*/
	printf("\nenter two number:");
	scanf("%f%f", n1, n2);

	*sum = *n1 + *n2;
	printf("\nsum of two numbers:%.2f", *sum);

	/*free*/
	free(n1);
	free(n2);
	free(sum);

 }