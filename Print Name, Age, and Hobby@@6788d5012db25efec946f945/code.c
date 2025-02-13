#include<stdio.h>

int main(){
    char Name[100];
    int Age;
    char Hobby;

    scanf("%99[^\n]",Name);
    scanf("%d",&Age);
    scanf("%99[^\n]",Hobby);
    printf("\nName: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s\n",Hobby);
    return 0;

}