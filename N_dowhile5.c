/*print bellow pattern by using nested do while loop   1
													   1 2
													   1 2 3
													   1 2 3 4
													   1 2 3 4 5
													
													
										
													
													*/
#include<stdio.h>
int main()
{
	//local variable
	int i = 1, j;

	do {
		j = 1;
		do {
			printf("%d", j);
			j++;

		} while (j <= i);
		i++;
		printf("\n");
	} while (i <= 5);
	return(0);
}