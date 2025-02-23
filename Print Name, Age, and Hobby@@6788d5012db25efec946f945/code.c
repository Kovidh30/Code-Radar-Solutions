#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;
    

    getchar();  // To consume the newline character left by previous scanf
    fgets(hobby, sizeof(hobby), stdin);  // To read a string with spaces (hobby)
    
    // Output: Printing the name, age, and hobby
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite Hobby: %s\n", hobby);
    
    return 0;
}
