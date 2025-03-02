#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("%d 31\n");
            break;
        case 2:  
            printf("%d 28\n");
            break;  
        case 3:
            printf("%d 31\n");
            break;
        case 4:
            printf("%d 30\n");
            break;
        case 5:
            printf("%d 31\n");
            break;
        case 6:
            printf("%d 30\n");
            break;
        case 7:
            printf("%d 31\n");
            break;
        case 8:
            printf("%d 31\n");
            break;
        case 9:
            printf("%d 30\n");
            break;  
        case 10:
            printf("%d 31\n");
            break;
        case 11:
            printf("%d 30\n");
            break;
        case 12:
            printf("31\n");
            break;     
        default:
            printf("Invalid month");
            break;
                     

    }
}