#include<stdio.h>
int main()
{
	//local varriable declaration
	
	int a,b,c, ans;
	printf("enter all value:");
	scanf("%d%d%d", &a, &b, &c);
	//fun declaration
	int mul(int a, int b, int c);
	 
	//code
	ans = mul(a,b,c);
	printf("mul 3 no=%d",ans);
	
	return(0);
}int mul(int a, int b, int c)
{
	int multiplication;
	multiplication = a * b * c;

	return(multiplication);
}