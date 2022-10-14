/*Write a c program to understand how to write a function without parameters and without return type*/
#include<stdio.h>
void sum()
{
	int x = 10, y = 25;
	int z = x + y;

	printf("\nResult=%d", z);

}
void main()
{
	//call the fuction
	sum();
  }