#include <stdio.h>
#define N 100

int main()
{
    int a[N][N], matrix, rows, cols;
    printf("Enter the number of 2 D matrix:");
    scanf("%d", &matrix);
    printf("\nEnter the number of rows:");
    scanf("%d", &rows);
    printf("\nEnter the number of cols:");
    scanf("%d", &cols);
    
    for(int k=0; k<matrix; k++)
    {
        
        printf("\nElements for matrix : %d", k+1);
        for(int i=0; i<rows; i++)
        {
            printf("\nEnter the elements of row %d: ",i+1);
            for(int j=0; j<cols; j++)
            {
                scanf("%d", *(a+i)+j);
            }
        }
    }
    printf("\n3 D Matrix:\n");
    for(int k=0; k<matrix; k++)
    {
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                printf("%d\t", *(*(a+i)+j));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}