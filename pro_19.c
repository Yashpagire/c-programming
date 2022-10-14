//To store a name into a charecter type array and display it.
#include<stdio.h>
void main()
{  
	/*declare array*/
	char name1[20], name2[20];
	//code
	printf("\nenter a name:");
	scanf("%s", &name1);

	printf("\nenter a name:");
	scanf("%s", &name2);

	printf("\n%s", name1);
	printf("\n%s", name2);


}