#include<stdio.h>

 int main()
{
	//local variable
	FILE* fp_test_read = NULL;
	FILE* fp_test1_write = NULL;

	char ch;
	int char_count = 0;
	int line_count = 1;

	fp_test_read = fopen("test.txt", "r");
	fp_test1_write = fopen("test1.txt", "a");

	if (fp_test_read == NULL && fp_test1_write == NULL)
	{
		printf("unable to open");
			exit(0);
	}
	ch = fgetc(fp_test_read);

	while (ch != EOF)
	{
		char_count++;
		fputc(ch, fp_test1_write);
		ch = fgetc(fp_test_read);

		if (ch == '\n')
		{
			line_count++;
		}
	}
	printf("\n%d char copy", char_count);
	printf("\n %d line count", line_count);

	//close file
	if (fp_test_read != NULL)
	{
		fclose(fp_test_read);
		fp_test_read = NULL;
	}
	if (fp_test1_write != NULL)
	{
		fclose(fp_test1_write);
		fp_test1_write = NULL;
	}
	return(0);
}