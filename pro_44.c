/*Write a c program to pass a string to a function and display it inside the function */
#include<stdio.h>
int main()
{
	char str[] = "yash pagire";

	void myfunction(str);

	myfunction(str);

  }
void myfunction(str)
{
	printf("%s", str);
}
     