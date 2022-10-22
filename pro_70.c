/*passing a structure to a function and returning the structure from the function */
#include<stdio.h>
#include<string.h>

/*declare a structure globally */
struct student
{
	int rno;
	char name[20];
};

struct student s = { 10,"yash" };  /*initialize*/
struct student* p1, * p2;          /*structure pointer*/

/*function to accecpt and display structure*/
struct student* display(struct student* ptr);

void main()
{
	/*store structure address into p1*/
	p1 = &s;

	/*call the function and pass structure pointer */
	p2 = display(p1);

	/*returned structure is shown by p2*/
	printf("\nrno=%d", p2->rno);
	printf("\nname=%s", p2->name);
}
  /*function to modify structure element*/
struct student* display(struct student* ptr)
{
	/*modifybstructure element*/
	ptr->rno++;

	strcpy(ptr->name, "yash");
	return(ptr);
 }