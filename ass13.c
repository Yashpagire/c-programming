//declare array and assign 5 int values and print all values by using for loop
#include<stdio.h>
int main()
{
	int i;
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (i = 0; i < 5; i++)
		printf("\n%d", arr[i]);
	return(0);

}
