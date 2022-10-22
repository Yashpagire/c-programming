/*in this program we allocate dynamic memory for a string of 20 chareter size. */
#include<stdio.h>
void main()
{
	char* str; /*a charecter pointer*/

	/* allocate dynamic memory to store 20char*/
	str = (char*)malloc(20 * sizeof(char));

	printf("\nEnter a string:");
	scanf("%s", str);

	printf("\nu eneter:%s", str);
 }