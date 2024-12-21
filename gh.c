#include <stdio.h>
#include <conio.h>
void main()
{
    int i, m, n;
    printf("enter rows & columns");
    scanf("%d%d", &m, &n);
    int  matrix[m][n],transpose[n][m];
    printf("Enter elements of the matrix");
    for (i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            transpose[i][j]=0;
        }
    }
    printf("the entered matrix is:\n ");
    for (i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++){
        transpose[i][j]=matrix[j][i];
        }
    }
     printf("the transposed matrix is:\n ");
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    }