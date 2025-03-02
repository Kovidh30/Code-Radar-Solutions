#include<stdio.h>

int main(){
    int N,i,j;
    
    for(i=1; i<=N;i++){
        for(j=1;j<=N;j++){
        printf("*");
        if(j !=i){
            printf(" ");
        }
        }
        
    }

}