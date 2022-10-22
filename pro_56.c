/*create a variable on static and dynymic memory */
#include<stdio.h>
#include<memory.h>
 
void main()
{
	int num;  /*a variable*/
	int* ptr;  /*pointer variable*/

	printf("\nstatic memory allocation:");
	printf("\nenter a number:");
	scanf("%d", &num);
	printf("you enter :%d", num);

	printf("\n\ndynamic memory allocation:");
	printf("\nenter number:");

	ptr = (int*)malloc(sizeof(int));

	/*store value in that memory referred by ptr*/
	scanf("%d", ptr);
	printf("you entered:%d", *ptr);

	/*free memo*/
	free(ptr);
}