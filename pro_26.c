/*write a function with parameters but without return type*/
#include<stdio.h>
 void main()
{  
	//call fun
	 sum(10, 25);
	 
}
 void sum(int x, int y)
{
	int z = x + y;
	printf("\nresult=%d", z);
  }