/*write a c program to know how to use the #define statement to declare constant value*/
#include<stdio.h>
#define pi 3.14159
int main()
{   
	//local variable declaration
	float radius, area;
	//code
	printf("\nenter radius:");
	scanf("%f", &radius);

	area = pi * radius * radius;

	printf("area of circle:%f", area);

	return(0);
    

}
