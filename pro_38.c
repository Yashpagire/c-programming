/*To copy the first few charecters of a string into another string */
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10], s2[50];
	int n;
	puts("\nEnter s tring:");
	gets(s2);

	puts("\nHOW MANY CHARECTER TO COPY?");
	scanf("%i", &n);

	strncpy(s1, s2, n);

	printf("\n The first %d charecter are:%s", n, s1);



	return(0);
 }
