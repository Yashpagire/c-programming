//to find the area of a circle where thw constant pi is used
#include<stdio.h>
int main()
{
	//declare the constant pi value
	const float pi = 3.14159;
	float radius, area;

	printf("\nenter radius:");
	scanf("%f", &radius);

	area = pi * radius * radius;
	printf("\narea of circle:%f", area);

	return(0);
}




//output
 Enter radius:7
 area of circle:153.937912