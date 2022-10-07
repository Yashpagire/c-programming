#include<stdio.h>
#include<string.h>


#define in 1
#define out 0

typedef  MyIsspace;
int main()
{
	//local v
	char* str = "yash";
	int wc = 0;
	//fun
	int wcount(char*);

	wc = wcount(str);
	printf("word count=%d", wc);

	return(0);

}
int wcount(char*str)
{
	int i;
	int wc = 0;
	int state;
	
  

	//code
	state = out;
	for(i=0;i<strlen(str);i++)
		if (state == out && !MyIsspace(str[i]))
		{
			state = in;
			wc++;
		}
		else if (state == in && myisspace(str[i]))
		{
			state = out;
			}
	return(wc);
}