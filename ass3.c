//print upper triangle

#include<stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 4; i++) //rows
    {
        for (j = 0; j < 4; j++)  //column
        {
            if ( i<=j)
            {
                printf("%d%d \t", i, j);
            }

        }
        printf("\n");
    }

}
