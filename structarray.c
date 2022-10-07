//structure array
#include<stdio.h>
struct _point
{
	int x;
	int y;
};
  int main()
{
	struct _point point;
    struct _point point;
	struct _point point[3][3];

	point[0].x = 10;
	point[0].x = 20;

	point[1].x = 30;
	point[1].x = 40;

	point[2].x = 50;
	point[2].x = 60;

	if (point.x > 0 && point.y > 0)
		printf("\nposition of x:%d & y:%d is on 1 qudrant", point.x, point.y);
	else if (point.x < 0 && point.y > 0)
		printf("\nposition of x :%d & y: %d is on 2 qudrant", point.x, point.y);
	else if (point.x < 0 && point.y < 0)
		printf("\nposition of x:%d & y:%d is on 3 qudrant", point.x, point.y);
	else if (point.x > 0 && point.y < 0)
		printf("\nposition of x:%d & y:%d is on 4 qudrant", point.x, point.y);
	return(0);

}