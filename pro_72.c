
/*To understand how to create and use nested structure.in this program,dob is the nested structure inside employee structure*/
#include<stdio.h>
/*structure to store data of birth*/
struct dob
{
	int dd;
	int mm;
	int yy;
};
/*structure to store employee data */
struct emplyee
{
	int id;
	char name[20];
	struct dob d;     /*d is dob structure variable*/
};

void main()
{
	/*declare employee structure variable*/
	struct employee e;

	/*store data into employee structure*/
	printf("\nenter employee id:");
	scanf("%d", &e.id);
	fflush(stdin);
	printf("\nenter employee name:");
	gets(e.name);
	printf("\nenter date of birth(dd/mm/yyyy:");
	scanf("%d%d%d", &e.d.dd, &e.d.mm, &e.d.yy);

	/*display data from employee stucture*/
	printf("\nid=%d", e.id);
	printf("\nname=%s", e.name);
	printf("\ndate of birth: % d % d % d", &e.d.dd, &e.d.mm, &e.d.yy);

}