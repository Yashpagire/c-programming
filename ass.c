//write a program which accept n from user and print addition of that numbers  input=4 7 2 1 5 3 8 output=30
#include<stdio.h>
int main()
{
	int i;
	int num;
	int evencaunt = 0;
	int oddcaunt = 0;
	

	printf("enter value of num is:");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
			evencaunt = evencaunt + i;
		else
		{
			oddcaunt = oddcaunt + i;
		}
		printf("caunt of all even no=%d\n",evencaunt);
		printf("caunt of all odd no=%d\n",oddcaunt);

	}

	return(0);
}
