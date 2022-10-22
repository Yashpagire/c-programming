/*A c program to understand how to create near,far and huge pointer */
#include<stdio.h>
 int main()
{
	int x = 100;
	int y = 200;
	int z = 300;

	int near *p1 = &x;
	int far *p2 = &y;
	int huge *p3 = &z;
     

	printf("\n size of p1=%d", sizeof(p1));
	printf("\n size of p2=%d", sizeof(p2));
	printf("\n size of p3=%d", sizeof(p3));

	return(0);
 }