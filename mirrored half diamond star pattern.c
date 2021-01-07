#include <stdio.h>

int main()
{
    int N, i, j;
    printf("Enter number of rows to print mirrored half diamond star pattern \n");
    scanf("%d",&N);
    int space=N-1, star=1;
    for(i=1; i< N*2; i++)
    {
        for(j=1; j <= space; j++)
        {
            printf(" ");
        }
        for(j=1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");

        if(i < N)
        {
            star++;
            space--;
        }else{
            star--;
            space++;
        }
    }
}
