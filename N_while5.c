/*print bellow pattern by using nested while loop   11
													21 22
													31 32 33
													41 42 43 44
													51 52 53 54 55
													*/

#include<stdio.h>
int main()
	{
		
			// local variable declaration
			int i = 1, j;
			//code
			while (i <= 5)
		j = 1;
		while (j <= i)
		{
			printf("\t%d%d",i,j);
			j++;
		}
		printf("\n");
		i++;
	
	return(0);
}
