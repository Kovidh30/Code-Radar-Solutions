#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i =N; i <= N;i--){
        printf("*");
        for(int j = 0; j<=N;j++){
            printf(" ");
        }

    }
}