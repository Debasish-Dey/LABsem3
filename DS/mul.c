#include <stdio.h>

int main()
{
    int m, n, p;
    printf("Enter the number of rows and columns in the 1st matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of columns in the 2nd matrix: ");
    scanf("%d", &p);
    int a[m][n], b[n][p], c[m][p];
    printf("Enter the elements in the 1st matrix row-wise:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements in the 2nd matrix row-wise:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The resultant matrix will be:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
