//accept n no of user and print all no addition by using loop
#include<stdio.h>
int main()
{
	//local varible
	int  max;
	int ans = 0;
	//fun declaration
	int addition(int max);

	//code
	printf("enter value max:");
	scanf("%d", &max);

	printf("ans=%d", addition(max));

	return(0);

}
int addition(int max)
{
	int add;
    //code
	for (int i = 1; i <= max; i++)
	{
		add = add + i;
	}
	return(add);
  }
