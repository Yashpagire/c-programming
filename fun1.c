#include<stdio.h>
int main()
{
	//local variable declaration
	char msg1[] = "yash";
	char msg2[] = "yasharsh";

	//function declaration

	void displaymessage(char str[]);

	//code
	displaymessage(msg1);
	displaymessage(msg2);
	displaymessage("yash govardhan pagire");

	return(0);
}
void displaymessage(char str[])
{
	printf("\n%s", str);
 }
