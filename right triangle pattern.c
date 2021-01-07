#include <stdio.h>

int main()
{
    int N;
    printf("Enter number of rows for right triangle pattern\n");
    scanf("%d", &N);
    int i, j;

    for(i=1; i <= N; i++)
    {
        for(j=1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
