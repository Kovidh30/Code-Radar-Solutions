#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
  for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int number;
    scanf("%d", &number);
    if (isPrime(number))
    {
        printf("Prime");
    }
     else {
        printf("Not Prime");
    }

    return 0;
}


