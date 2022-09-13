// find sum
#include<stdio.h>
int main(int argc,char*argv[])
{
	//local variable declaration
	int sum = 0,a,b;
	//code
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	sum = atoi(argv[1]) + atoi(argv[2]);

	printf("%d", sum);

	return(0);
}
