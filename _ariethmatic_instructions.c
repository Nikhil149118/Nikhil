#include <stdio.h>

int main()
{
    int a = 5, c = 5;

    printf("the sum of fn is %d\n", a + c);
    printf("the diff of fn is %d\n", a - c);
    printf("the product of fn is %d\n", a * c);
    printf("the ratio of fn is %d\n", a / c);
    int z = a * c; /*legal*/
    printf("the value of z is %d\n", z);
    // int a*c = z; is illegal bcz = is an assignment operator
    printf("6 when divided by 4 gives remainder %d\n",6%4);
    // % is used to find remainder of the given division

    printf("5 multiplied by 4 gives %d\n", 5*4); /*valid*/
    // printf("5 multiplied by 4 gives %d\n", 5.4); /*invalid*/
    // no operator is assumed to be present automatically
    
    return 0;
}