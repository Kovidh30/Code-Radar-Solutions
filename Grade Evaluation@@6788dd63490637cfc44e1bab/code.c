#include <stdio.h>

int main() {
    char grade;
    
    // Take input grade
    printf("Enter grade (A, B, C, D, F): ");
    scanf("%c", &grade);
    
    // Evaluate grade and print the corresponding description
    switch(grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }
    
    return 0;
}
