/*To understand how the extern variable will be available to all the functions */
#include<stdio.h>
int x;    //global variable
void one()
{
	x++;
	printf("\nx in two =%d", x);

}
void two()
{
	x++;
	printf("\nx in two =%d", x);

}
void main()
{
	

	printf("\nx in main =%d", x);
	 one();
	 two();
 }
