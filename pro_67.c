/*Program to create a structure with elements for an electricity bill */
#include<stdio.h>
#include<string.h>
struct ebill
{
	int mno;
	char name[20];
	int previous;
	int present;
	int units;
	float charge;

  };

int main()
{  
	/*declare structure type variable eb */

	struct ebill eb;

	/*store data into the structure members*/
	eb.mno = 1005;
	strcpy(eb.name, "yashkumar");
	eb.previous = 500;
	eb.present = 750;
	eb.units = eb.previous - eb.present;
	/*charge per using is rs.4.50 */
	eb.charge = eb.units * 4.50;

	/*read and display data from the structure*/

	printf("\nmeter no:%d", eb.mno);
	printf("\ncustomer name:%s", eb.name);
	printf("\nprevious reading:%d", eb.previous);
	printf("\npresent reading:%d", eb.present);
	printf("\ntotal units:%d", eb.units);
	printf("\ntotal charge:%8.2f", eb.charge);

    return(0);
   }