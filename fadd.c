//accept no of user and print addition of two no by using function
#include<stdio.h>
 int main()
{
	//fun declaration
	int addition(int, int);

	//local variable
	int a;
	int b;
	int ans = 0;

	//code
	printf("enter value of a:");
	scanf("%d", &a);
	printf("enter value of b:");
	scanf("%d", &b);

	printf("ans=%d", addition(a, b));

	return(0);
	
}
  int addition(int a, int b)
{
	  
	  int add;

	add = a + b;
	return(add);
}
 
