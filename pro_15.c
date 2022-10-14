//to display the devision obtained by a student depending on his percentage of marks
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int percent;

	printf("\ntype percent:");
	scanf("%d", &percent);

	if (percent > 100)
	{
		printf("\nwrong percentage");
		exit(0);
	}

	switch (percent / 10)
	{
	case 0:
	case 1:
	case 2: printf("\nfail"); break;
	case 3:
	case 4:printf("\nthird division"); break;
	case 5:printf("\nsecond division"); break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:printf("\nfirst division"); break;




	}
	return(0);
}