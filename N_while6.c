/*print bellow pattern by using nested while loop   11
													  22
												        33
													      44
													        55
													*/

#include<stdio.h>
  int main()
{  
	// local variable declaration
	int i = 1, j;
	//code
	while (i <= 5)
	{
	j = 1;
	while (j <= 5)
	{
		if (i == j)
		{
			printf("\t%d%d", i, j);
			
		}
		else
		{
			printf(" ");
		}
		j++;
	}
	printf("\t\n");
	i++;
    }
return(0);
}
