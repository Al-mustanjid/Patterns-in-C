#include <stdio.h>

int main()
{
    int N, i, j, column=1;
    printf("Enter number of rows to print half diamond star pattern \n");
    scanf("%d", &N);

    //the number of row is double to user input
    for(i=1; i <= N*2; i++)
    {
        //loop to print star
        for(j=1; j < column; j++)
        {
            printf("*");
        }
        printf("\n");

        if(i<=N)
        {
            column++;
        }
        else{
            column--;
        }
    }
}
