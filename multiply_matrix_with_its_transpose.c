//C program to multiply matrix with its transpose.
#include <stdio.h>

int main() 
{
    int a[10][10], b[10][10], mul[10][10];
    int m, n, i, j, k;

    //read the order of the matrix
    printf("Enter the order of matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            //transpose matrix a and store in b matrix
            b[j][i] = a[i][j];  
        }
    }

    printf("\nmatrix after multiplication:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            mul[i][j] = 0;
            for (k = 0; k < n; k++) 
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("%4d", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
