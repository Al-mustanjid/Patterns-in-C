#include <stdio.h>

int main()
{
    int i, j, N;
    printf("Enter number of rows to print Mirror Reversed Right Triangle pattern \n");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=i; j <= (2*i - 2); j++)
        {
            printf(" ");
        }
        for(j=i; j <=N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
