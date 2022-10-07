#include<stdio.h>
//user defined 
struct Point
{
	int x;
	int y;
};

int main()
{
	//local variable
	struct Point point;
	//code
    
	printf("enter value point.x=");
	scanf("%d", &point.x);
	printf("enter value point.y=");
	scanf("%d", &point.y);

	if (point.x > 0 && point.y > 0)
		printf("\nposition of x:%d & y:%d is on 1 qudrant", point.x, point.y);
	else if (point.x < 0 && point.y > 0)
		printf("\nposition of x :%d & y: %d is on 2 qudrant", point.x, point.y);
	else if (point.x < 0 && point.y < 0)
		printf("\nposition of x:%d & y:%d is on 3 qudrant", point.x, point.y);
	else if (point.x > 0 && point.y < 0)
		printf("\nposition of x:%d & y:%d is on 4 qudrant", point.x, point.y);

}