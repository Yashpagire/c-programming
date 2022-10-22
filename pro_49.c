/*Write a c program to prove that local variable value dominates the global variable inside a function */
#include<stdio.h>
int x = 10;   // gloabal variable
void one()
{
	 int x = 20;
	
	printf("\nx in one =%d", x);

}
void two()
{
	extern int x;
	
	printf("\nx in two =%d", x);

}
void main()
{

	extern int x;
	printf("\nx in main =%d", x);
	one();
	two();
}