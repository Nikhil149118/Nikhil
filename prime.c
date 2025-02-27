#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1; // Assume the number is prime

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        isPrime = 0;
    } 
    else {
        // Check for factors other than 1 and the number itself
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, not a prime number
                break;
            }
        }
    }

    // Output the result
    if (isPrime==1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;

}