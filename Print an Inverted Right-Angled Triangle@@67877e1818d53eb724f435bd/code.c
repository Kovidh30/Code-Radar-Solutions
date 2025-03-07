#include<stdio.h>

int main(){
    int N,i,j,k;
    scanf("%d",&N);

    for(int i=N; i >= 1;i++){
        for(int j = 1; j<=i-n; j++){
            printf(" ");
        }
        for(int k=1; k<=n;k++){
            printf("* ");
        }
        printf("\n");

    }
}