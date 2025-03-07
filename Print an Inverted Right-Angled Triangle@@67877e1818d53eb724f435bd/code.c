#include<stdio.h>

int main(){
    int N,i,j;
    scanf("%d",&N);

    for(int i=1; i <= N;i++){
        for(int j = i; j<=N-i; j++){
            printf("* ");
        }
        printf("\n");

    }
}