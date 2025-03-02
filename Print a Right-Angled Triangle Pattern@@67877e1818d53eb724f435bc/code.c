#include<stdio.h>

int main(){
    int N,i,j;
    
    for(i=1; i<=N;i++){
        for(j=i;j<=i;j++){
        printf("*");
        if(j !=i){
            printf(" ");
        }
        }
        printf("\n");
        
    }

}