//write a program which accept n from user and print addition of that numbers  input=4 7 2 1 5 3 8 output=30
#include<stdio.h>
 int main()
 {
	int i;
	int n = 0;
	int num = 0;
	int sum = 0;


	printf("how many numbers you want to enter:");
	scanf("%d", &n);

	printf("\n\n enter the value %d:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum = sum + num;
	}
	printf("\n\n sum=%d", sum);
	return(0);
}
