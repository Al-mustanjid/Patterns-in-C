#include <stdio.h>

int main()
{
    int N, i, j;
    printf("Enter the number of rows for print Inverted Pyramid Pattern \n");
    scanf("%d", &N);

    for(i=1; i <= N; i++)
    {
        //To print spaces run an outer loop from i to N-i.
        for(j=i; j < 2*i-1; j++)
        {
            printf(" ");
        }

        //To print squares run an outer loop from 1 to 2*i – 1
        for(j=1; j <= N*2 - (2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
