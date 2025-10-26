#include <stdio.h>
int main()
{
    printf(" \n *** This is large number calculater *** \n");
    int i, j, row, collum, large;

    printf("  Enter a number of row :");
    scanf("%d", &row);

    printf("  Enter a number of collum :");
    scanf("%d", &collum);

    int a[row][collum];

    printf("  Enter a Elements of array :\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < collum; j++)
        {
            printf("  a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    large = a[0][0];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < collum; j++)
        {
            if (a[i][j] > large)
            {
                large = a[i][j];
            }
        }
    }
    printf("Largest element of array is : %d", large);

    return 0;
}