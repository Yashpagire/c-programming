//To calculate the area of triangle where the measurements of three sides of the triangle are given
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, s, area;

	//accept the measurements of 3 sides
	printf("\nenter the three sides:");
	scanf("%f%f%f", &a, &b, &c);
	//find s value
	s = (a + b + c) / 2;
	//find area of triangle
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("\narea of triangle:%f", area);

	return(0);
}


/*output:

          10  9.2 3.5
		  16.081221     */