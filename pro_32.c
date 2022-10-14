/*Write a program to read and display a charecter using getchar()and putchar()functions*/
#include<stdio.h>
void main()
{
	char ch;
	printf("\nenter a charecter:");
	ch = getchar();

	printf("\nyou enter:");
	putchar(ch);

 }