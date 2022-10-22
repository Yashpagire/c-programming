#include<stdio.h>

//file handling

int main()
{
	//local variable declaration
	FILE* fp = NULL;

	fp = fopen("testfile.txt", "a");

	if (fp == NULL)
	{
		printf("\nEnable to open the file..");
		exit(1);
	}

	fprintf(fp, "\nText data");
	fclose(fp);

	return(0);
}