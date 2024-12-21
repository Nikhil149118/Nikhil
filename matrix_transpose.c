#include <stdio.h>
#include <conio.h>
void main()
{
    int i, arr[2][2], array[2][2];
    printf("Enter elements of the matrix");
    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the entered matrix is: ");
    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            array[j][i] = arr[i][j];
        }
    }
    printf("The transpose of given matrix is:");
    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}