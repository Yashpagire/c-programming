//declare array and assign 5 char and print all char by using for loop
#include<stdio.h>
int main()
{
	int i;
    char arr[5];
	arr[0] = 'Y';
	arr[1] = 'A';
	arr[2] = 'S';
	arr[3] = 'H';
	arr[4] = 'P';


	for ( i = 0; i < 5; i++)
	{
		printf("%c", arr[i]);
		printf("\n");

	}
	return(0);
}
