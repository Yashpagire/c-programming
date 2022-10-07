//swap two number
#include<stdio.h>
int main()
{
	//local variable declaration
	int n1 = 10;
	int n2 = 20;

	//function declaration
	void swap(int*, int*);

	//code
	printf("\nbefore swapping");
	printf("\nvalue of n1=%d", n1);
	printf("\nvalue of n2=%d", n2);
    
	swap(&n1, &n2);

	printf("\nafter swapping");
	printf("\nvalue of n1=%d", n1);
	printf("\nvalue of n2=%d", n2);

	return(0);

}
   void swap(int*p1, int*p2)
    {
	   //local variable declaration
	   int n3;
	   //code
	   n3 = *p1;
	   *p1 = *p2;
	   *p2 = n3;
    }