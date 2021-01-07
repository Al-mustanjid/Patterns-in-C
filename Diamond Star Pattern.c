#include <stdio.h>

int main()
{
    int N, i, j,star = 1;
    printf("Enter the number of rows to print Diamond Star Pattern \n");
    scanf("%d", &N);
    int space = N-1;

    for(i=1; i < N*2; i++)
    {
        for(j=1; j <= space; j++)
        {
            printf(" ");
        }
        for(j=1; j <= star*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<N)
        {
            star++;
            space--;
        }else{
            star--;
            space++;
        }
    }
}
