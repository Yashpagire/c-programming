/*To understand the usage of static variable */
#include<stdio.h>
 void main()
{  
	 void test();
	test();
	test();
	test();

 }
 void test()
{
	static int i = 1;
	auto int j = 1;

	printf("\n%d\t%d", i++, j++);
   }