/*To understand the scop of variable in a function*/
#include<stdio.h>
int main()
{
	

	void fun();

	fun();
	fun();
	fun();
	fun();


 }
void fun()
{
	int x = 1;
	static int y = 1;

	printf("\nx=%d\ty=%d", x, y);
	x++;
	y++;
   }