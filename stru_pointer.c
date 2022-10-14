#include<stdio.h>
 
struct EMP
{
	int idata;
	float fdata;

};
int main()
{
	//local variable declaration
	struct EMP emp;

	struct EMP* p_emp = NULL;
	p_emp = &emp;

	p_emp->idata = 10;
	p_emp->fdata = 1.1f;

	//print
	printf("\np_emp->idata=%d", p_emp->idata);
	printf("\np_emp->fdata=%.1f", p_emp->fdata);

	return(0);

  }