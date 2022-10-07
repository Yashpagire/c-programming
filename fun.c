#include<stdio.h>
int main()
{
	//local variable declaration
	char msg1[] = "india is my country";

	
	//function declaration
	void displaymessage(char str[]);

	//code

	displaymessage(msg1);

	return(0);

}
void displaymessage(char str[])
{
	printf("\n%s", str);
  }