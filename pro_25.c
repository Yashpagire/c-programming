/*A function with return type and without parameters.*/
#include<stdio.h>
int main()
{
	int result = sum();
	printf("\nresult=%d", result);
}
int sum()
{
	int x = 10, y = 25;
	int z = x + y;
	return(z);
 }