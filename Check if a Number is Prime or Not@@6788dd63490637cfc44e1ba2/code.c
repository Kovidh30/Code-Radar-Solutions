#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // n is divisible by i, so it's not prime
        }
    }
    return 1; // n is prime
}

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}


