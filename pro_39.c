/*Write a c program to accept a name in parts and make a full name of a person */
#include<stdio.h>
#include<string.h>
#define SPACES"  "
int main()
{
	//declare static type char arrys
	static char sur[20], mid[20], last[20], fname[100];

	printf("\nenter surname:");
	gets(sur);

	//add surname to fname
	strcat(fname, sur);
	//after that add 2 space
	strcat(fname, SPACES);

	printf("\nenter midname:");
	gets(mid);

	//add midname after surname
	strcat(fname, mid);

	//after that add 2 space
	strcat(fname, SPACES);

	printf("\nenter lastname:");
	gets(last);

	//add last name after midname
	strcat(fname, last);

	//display full name
	printf("\nFull name:%s", fname);


 }