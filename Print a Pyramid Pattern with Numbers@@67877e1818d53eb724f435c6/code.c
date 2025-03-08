#include<stdio.h>

int main(){
    int N,i,j,k;;
    scanf("%d",&N);
    for(int i = 1; i<=N;i++){
        for(int j = 1; j<=N-i; j++){
            printf(" ");
        }
        while(k != 2*i-1){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}