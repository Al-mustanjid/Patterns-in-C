#include <stdio.h>

int main()
{
    int N, i, j;
    printf("Enter the number of rows to print right triangle pattern \n");
    scanf("%d", &N);

    //print an outer loop from 1 to N
    for(i=1; i <= N; i++)
    {
         for(j=i; j < N; j++)
        {
            printf(" ");
        }

        //print an inner loop for print * from 1 to i
        for(j=1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
