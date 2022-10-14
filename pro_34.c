/*To display the ASCII codes and associate charecter*/
#include<stdio.h>
int main()
{  
	int c;

	for (c = 0; c <= 255; c++)
	{
		printf("\nASCII=%d\tchar=%c", c, c);
	}

	return(0);
 }