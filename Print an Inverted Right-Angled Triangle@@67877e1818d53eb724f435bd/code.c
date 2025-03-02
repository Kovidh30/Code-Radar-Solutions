#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i =N; i <= N;i--){
        for(int j = 0; j<=N;j++){
            printf(" ");
        }
        for(int k= 1; k< 2*i;k++){
            printf("*");
        }
        printf("\n");

    }
}