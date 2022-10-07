#include<stdio.h>
  int main()
{
	//local variable
	int arr[3] = { 1,2,3 };
    
	//code
	printf("\nusing array");
	printf("\n address of arr[0]:%d", arr[0]);
	printf("\n address of arr[1]:%d", arr[1]);
	printf("\n address of arr[2]:%d", arr[2]);


	printf("\nusing pointer");
	printf("\nvalue of *(arr):%d", *arr);
	printf("\nvalue of *(arr+1):%d", *(arr+1));
	printf("\nvalue of *(arr+2):%d", *(arr+2));

	return(0);

}