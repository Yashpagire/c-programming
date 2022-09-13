// find sum 
#include<stdio.h>
int main(int argc, char* argv[])
{
	//local variable declaration
	int sum = 0;
	//code

	sum = atoi(argv[1]) + atoi(argv[2]);

	printf("%d", sum);

	return(0);
}
