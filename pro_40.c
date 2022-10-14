/*this program usefull to accept a pass word from the user and compare it with actual password.*/
#include<stdio.h>
#include<string.h>
#define PASSWD "computer"
void main()
{
	char user_pd[20];

	printf("\nenter pass word");
	scanf("%s", user_pd);

	if (strcmp(PASSWD, user_pd) == 0)
	{
		printf("\n welcome to you");

	}
	else
	{
		printf("\nsorry,wrong password");
	}
 }