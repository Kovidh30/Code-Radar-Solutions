#include<stdio.h>

int main(){
    int N,i,j,k;
    scanf("%d",&N);

    for(int i=1; i <= N;i++){
        for(int j = 2; j<=N;j++){
            printf(" ");
        }
        for(int k=1; k<= i;k++){
            printf("*");
        }
        printf("\n");

    }
}