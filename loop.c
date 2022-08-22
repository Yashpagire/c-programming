//demonstrate example of continue
#include<stdio.h>
int main()
{
	int i;
	while(i<10)
	{
		
		i++;
		if (i == 3)
		{
			continue;
		}
	
		printf("%d", i);
		
	}










	return(0);
}