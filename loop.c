//implement infinite loop using for loop
#include<stdio.h>
int main()
{
	int i = 0;
	for (; ;)  //infinite loop
	{
		if (i <= 5)
		{
			printf("%d", i);
		}
		else
		{
			break;
		}
		i++;
	}

	return(0);
}