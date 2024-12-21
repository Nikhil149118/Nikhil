#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[10], k = 0, n;
    printf("enter array elements\n");
    for (int i = 0; i <= 9; ++i)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter any number to be checked in array");
    scanf("%d", &n);
    for (int i = 0; i <= 9; i++)
    {
        if (n == arr[i])
        {
            printf("Number is in array");
            k = 1;
        }
    }
    if (k == 0)
        printf("array doesn't have the value");
}
