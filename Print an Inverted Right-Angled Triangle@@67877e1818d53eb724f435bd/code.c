#include<stdio.h>

int main(){
    int N,i,j,k;
    scanf("%d",&N);

    for(int i=1; i <= N;i++){
        for(int j = 1; j<=N;j++){
            printf(" ");
        }
        for(int k= N; k<= i;k--){
            printf("*");
        }
        printf("\n");

    }
}