/*in this program we allocate dynamic memory of a group of string each having 20 char size*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* name[50]; /*array of pointer */
	int i, n;


	printf("\nhow many names?");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("\nenter name %d:", i + 1);
		fflush(stdin);

		name[i] = (char*)malloc(20);
		gets(name[i]);

	}
	printf("\nnames list:\n");
	for (i = 0; i < n; i++)
		puts(name[i]);
}