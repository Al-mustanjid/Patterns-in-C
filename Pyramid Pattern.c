#include <stdio.h>

int main()
{
    int i, j, N;
    printf("Enter number of rows to print Pyramid Pattern \n");
    scanf("%d", &N);
    for(i=1; i <= N; i++)
    {
        //To print spaces run an outer loop from i to N-i.
        for(j=i; j < N; j++)
        {
            printf(" ");
        }

        //To print squares run an outer loop from 1 to 2*i – 1
        for(j=1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
