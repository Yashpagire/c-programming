// find sum,mul,sub,dev using switch case
#include<stdio.h>
 int main(int argc, char *argv[])
{
	//local variable declaration
	int a, b;
	float ans = 0.0f;
	char symbol;
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	symbol = argv[2][0];

	switch (symbol)
	{
	case'+':
		ans = a + b; break;

	case'-':
		ans = a - b; break;

	case'*':
		ans = a * b; break;
  
	case'/':
		ans = (float)a / (float)b; break;

	default:
		printf("\n invalid operation");
		exit(1);
    }
	printf("\n ans=%.1f", ans);
	return(0);
}