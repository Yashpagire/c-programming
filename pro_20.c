//A c program to accept differnt types of input and display it.
#include<stdio.h>
void main()
{
	int id;
	char sex;
	char name[20];

	//code
	printf("\nenter id:");
	scanf("%d", &id);

	printf("\nenter sex:");
	scanf("%c", &sex);
    
	printf("\nenter name:");
	scanf("%s", &name);

	printf("id=%d", id);
	printf("sex=%c",sex);
	printf("name=%s", name);


}