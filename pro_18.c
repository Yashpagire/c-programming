//To find the total marks and percentage of marks obtained by a student in 5 subjects
#include<stdio.h>
void main()
{
	int marks[5];

	int i, tot = 0;
	float percent;

	for (i = 0; i < 5; i++)
	{
		printf("enter marks:");
		scanf("%d", &marks[i]);

		/*find total marks*/
		tot = tot + marks[i];
	}
	printf("\ntotal marks=%d", tot);
	/*find percentage of marks*/
	percent = tot / 5;
	printf("\npercentage=%.2f", percent);
}