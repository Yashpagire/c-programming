//declare array and assign 5 float values and print all values by using for loop
#include<stdio.h>
int main()
{
	int i;
	float arr[5];
	
	arr[0] = 12.1f;
	arr[1] = 12.2f;
	arr[2] = 12.3f;
	arr[3] = 12.4f;
	arr[4] = 12.5f;
	


	for (i = 0; i < 5; i++)
	{
		printf("%.1f", arr[i]);
		printf("\n");
	}
	return(0);
}
