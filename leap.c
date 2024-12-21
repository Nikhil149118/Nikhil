#include <stdio.h>
void main()
{
    int year;
    printf("Enter year checked to be leap or not\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Entered year is leap");
    }
    else
    {
        printf("Entered year is not leap");
    }
}