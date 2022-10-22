/*Using the extern keyword in the fuctions to use the global variable */
#include<stdio.h>
int x = 10;   // gloabal variable
void one()
{ 
	extern int x;
	x++;
	printf("\nx in one =%d", x);

}
void two()
{  
	extern int x;
	x++;
	printf("\nx in two =%d", x);

}
void main()
{

	extern int x;
	printf("\nx in main =%d", x);
	one();
	two();
}