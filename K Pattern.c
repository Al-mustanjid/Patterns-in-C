#include <stdio.h>

int main()
{
    int N, i, j;
    printf("Enter the number of rows to print K Star pattern \n");
    scanf("%d", &N);

    for(i=1; i < N; i++)
    {
        for(j=i; j <= N; j++)
        {
            printf("*");
        }
        for(j=1; j < N; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    for(i=1; i <= N; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
