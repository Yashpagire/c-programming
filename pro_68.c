/*A c program to pass a structure to a function */
#include<stdio.h>
#include<string.h>

/*declare a structure globally */
struct student
{
	int rno;
	char name[20];
};

 /*function to display structure */
void display(struct student st);
void main()
{
	/*declare structure variable */
	struct student s;

	/*store data into structure element*/
	s.rno = 10;
	strcpy(s.name, "yash");
	
	/*call the function ans pass structure variable*/
	display(s);
}
  /*function to display structure element*/
void display(struct student st)
{
	printf("\nrno=%d", st.rno);
	printf("\nname=%s", st.name);

}