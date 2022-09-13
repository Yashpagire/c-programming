//declare array and assign 5 int values and print all  values by using for loop
#include<stdio.h>
int main()
{
	int i;
	int arr[5];
	int sum = 0;

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (i = 0; i < 1; i++)
	{ 
		printf("%d%d%d", arr[0], arr[1], arr[2]);
		sum =  arr[3]+arr[4];
	}
	printf("sum=%d", sum);
	return(0);

}
