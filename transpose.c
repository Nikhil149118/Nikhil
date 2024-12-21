// program to find transpose of matrix
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,r, c;
    printf("enter rows & columns");
    scanf("%d%d", &r, &c);
    int arr[r][c], array[c][r];
    printf("Enter elements of the matrix ROWWISE\n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the entered matrix is:\n ");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            array[j][i] = arr[i][j];
        }
    }
    printf("The transpose of given matrix is:\n");
    for (i = 0; i <c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}