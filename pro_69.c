/*A c program to pass a structure to the function using structure pointer */

#include<stdio.h>
#include<string.h>

/*declare a structure globally */
struct student
{
	int rno;
	char name[20];
};

/*function to display structure */
void display(struct student *ptr);
 void main()
 {
	/*declare structure pointer */
	struct student *s;

	/*store data into structure element*/
	s->rno = 10;
	strcpy(s->name, "yash");

	/*call the function ans pass structure pointer*/
	display(s);
 }
/*function to display structure element*/
 void display(struct student *ptr)
 {
	printf("\nrno=%d", ptr->rno);
	printf("\nname=%s", ptr->name);

 }
