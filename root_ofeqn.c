#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, x1, x2, D;
    printf("Enter the value of a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        printf("roots are real & distinct");
        x1 = (-b - (sqrt((b * b) - (4 * a * c)))) / (2 * a);
        x2 = (-b + (sqrt((b * b) - (4 * a * c)))) / (2 * a);
        printf("x=%f & x=%f", x1, x2);
    }
    else if (D == 0)
    {
        printf("roots are real & equal");
        x1 = x2 = -b / (2 * a);
        printf("x1=x2=%f", x1);
    }
    else
    {
        printf("roots are imaginary");
    }
}