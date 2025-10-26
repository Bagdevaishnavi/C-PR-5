#include <stdio.h>
int main()
{
    printf("*** This is sum calculater of 2d array ***");
    int row , col , r , sumrow=0 , c , sumcol=0;
    printf("\n Enter size of row :");
    scanf("%d" , &row);
    printf("\n Enter size of col :");
    scanf("%d" , &col);
    int a[row][col];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col; j++ )
        {
            printf("a[%d][%d] :" , i , j );
            scanf("%d" , &a[i][j]);
        }
    }
    printf("Enter number of row : ");
    scanf("%d" , &r);
    printf("Elements of row %d" , r);
    for( int j=0 ; j<col ; j++)
    {
        printf("%d," , a[r][j] );
        sumrow += a[r][j];
    }
    printf("The sum of row %d : %d" , r, sumrow );

    printf("Enter number of col :");
    scanf("%d" , &c);
    printf("Elements of col %d" , c);
    for (int  i = 0; i < row; i++)
    {
        printf("%d," , a[i][c] );
        sumcol += a[i][c];
    }
    printf("The sum of col %d : %d" , c , sumcol );
    
    return 0;
}