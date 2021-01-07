#include <stdio.h>

int main()
{
    int N, i, j, count;
    printf("Enter the number of rows to print X Pattern \n");
    scanf("%d", &N);
    count = N*2-1;
    for(i=1; i <= count; i++)
    {
        for(j=1; j <= count; j++)
        {
            if((j==i) || j == (count-i+1))
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
