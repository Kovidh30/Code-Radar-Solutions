#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(i = 1; i <= N; i++){
        for(int j = 1; j <=i - N; j++){
            printf(" ");
        }
        while(k != 2*i -1){
            printf("*");
        }
        printf("\n");
    }
}