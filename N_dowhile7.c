/*print bellow pattern by using nested do while loop   11
													   11 11
													   11 11 11
													   11 11 11 11
													   11 11 11 11 11


													*/
#include<stdio.h>
int main()
{
	//local variable
	int i = 1, j;

	do {
		j = 1;
		do {
			printf("\t11");
			j++;

		} while (j <= i);
		i++;
		printf("\n");
	} while (i <= 5);
	return(0);
}