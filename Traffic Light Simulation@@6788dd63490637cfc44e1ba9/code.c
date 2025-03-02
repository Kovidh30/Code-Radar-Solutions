#include <stdio.h>

int main() {
    char light;

    // Take input for the traffic light signal
    
    scanf("%c", &light);

    // Use a switch-case to determine the corresponding action
    switch(light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}

