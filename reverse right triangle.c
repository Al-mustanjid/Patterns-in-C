#include <stdio.h>

int main()
{
    int N;
    printf("Enter number of rows to print reverse right triangle\n");
    scanf("%d",&N);
    int i, j;

    for(i=1; i<=N; i++)
    {
        for(j=i; j<=N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
