#include<stdio.h>
int main ()
{
    printf("\n ***This is show matrix of array*** \n");
    int size;
    printf("\n Enter size of row & collum :");
    scanf("%d" , &size);
    int a[size][size];

    for (int i=0; i<size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] :",i,j);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Tranpose of matrix is :\n");
     for( int i=0;i<size;i++)
    {
        for( int j=0;j<size;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    


    return 0;
}