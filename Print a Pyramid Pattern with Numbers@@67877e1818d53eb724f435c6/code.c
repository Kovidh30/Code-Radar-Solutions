#include<stdio.h>

int main(){
    int N,i,j,k=0;
    scanf("%d",&N);
    for(int i = 1; i<=N;i++,k=0){
        for(int j = 1; j<=N-i; j++){
            printf(" ");
        }
       for(int k = 1; k<=i;k++){
            printf("%d ",k);
       }
        printf("\n");
        }
        
      
    }
