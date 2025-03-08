#include<stdio.h>

int main(){
    int N,i,j;
    char alphabet = 'A';
    scanf("%d",&N);
    for(int i = 1; i<=N;i++){
        for(int j = 1;j<=i;j++){
            printf("%c ",alphabet + 'j'-1);
            // alphabet++;
        }
        printf("\n");
    }
}