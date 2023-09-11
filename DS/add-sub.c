// write a program for addition and subtraction of matrices
#include <stdio.h>

int main()
{
    int m, n;
    printf("enter the number of rows and columns in matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n], c[m][n], d[m][n];
    printf("Enter the elements in the 1st matrix row-wise:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements in the 2nd matrix row-wise:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            d[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Resultant sum of the matrix will be:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    printf("Resultant subtracted matrix will be:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
