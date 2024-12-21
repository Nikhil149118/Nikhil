#include <stdio.h>
void main()
{
    int num;
    printf("enter any number to be determined even or odd\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("entered number is even");
    }
    else
    {
        printf("Entered number is odd");
    }
}