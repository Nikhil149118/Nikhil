#include <stdio.h>

int main() {
    float num1, num2, num3, largest;

    // Input three numbers from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

    // Find the largest number using logical operators
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the largest number
    printf("The largest number is: %.2f\n", largest);
    return 0;
}