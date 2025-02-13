#include<stdio.h>

int main(){
    char Name[100];
    int Age;
    char Hobby[100];

    scanf("%99[^\n]",&Name);
    scanf("%d",&Age);
    getchar();
    scanf("%99[^\n]",&Hobby);
    printf("\nName: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s\n",Hobby);
    return 0;

}