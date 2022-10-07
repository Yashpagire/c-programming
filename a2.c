#include<stdio.h>
int main()
{
	//local variable declaration
	int point_x;
	int point_y;
	//code
	printf("enter value point_x=");
	scanf("%d", &point_x);

	printf("enter value point_y=");
	scanf("%d", &point_y);

	if (point_x > 0 && point_y > 0)
	printf("\nposition of x:%d & y:%d is on 1 qudrant", point_x, point_y);
	else if(point_x < 0 && point_y > 0)
	printf("\nposition of x :%d & y: %d is on 2 qudrant", point_x, point_y);
	else if(point_x < 0 && point_y < 0)
	printf("\nposition of x:%d & y:%d is on 3 qudrant", point_x, point_y);
	else if(point_x > 0 && point_y < 0)
	printf("\nposition of x:%d & y:%d is on 4 qudrant", point_x,point_y);

	return(0);
}