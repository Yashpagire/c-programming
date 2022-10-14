/*write a function with parameters and with return type*/
#include<stdio.h>

int sum(int x, int y)
{
	int z = x + y;
	return(z);
}
int main()
{
	int result = sum(10, 25);
	printf("\nresult=%d", result);
	return(0);
  }