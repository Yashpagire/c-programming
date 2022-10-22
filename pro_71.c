/*program to copy the element from one structure variable to another structure variable.*/
#include<stdio.h>
void main()
{
	/*take a structure*/
	struct employee
	{
		int id;
		char name[20];
	};
	/*e1 is initiallized with data*/
	struct employee e1 = { 10,"yash" };
	/*e2 is also struture variable*/
	struct employee e2;

	/*copy e1 variable contents into e2*/
	e2 = e1;

	/*display the content of e2*/
	printf("\nid=%d", e2.id);
	printf("\nname=%s", e2.name);
 }