#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Positive");
    }
    elif(n<0){
        printf("Negative");
    }
    elif(n==0){
        printf("Zero");
    }
}