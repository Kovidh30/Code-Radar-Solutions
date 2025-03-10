#include <stdio.h>

int main() {
    int N;

    // Ask user for the number
    // printf("Enter a number: ");
    scanf("%d", &N);  // Read the number

    // Loop to print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);  // Print the multiplication
    }

    return 0;
}
