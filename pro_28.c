/*To find the square value of an integer number developing square()function*/
#include<stdio.h>
int main()
{  
	//local variable declaration
	int res,x;

	printf("\n enter an integer:");
	scanf("%d", &x);
	//call fun
	res = square(x);
	printf("res=%d", res);
}
int square(int x)
{
	int res;
	res = x * x;
	return(res);
  }
 