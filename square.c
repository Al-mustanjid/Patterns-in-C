#include <stdio.h>

int main()
{
    int N;
    printf("Enter number of rows and columns to print square\n");
    scanf("%d", &N);
    int i, j;
    printf("---------------------------------------------------\n");

    for(i=1; i <= N; i++)
    {
        for(j=1; j <= N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
