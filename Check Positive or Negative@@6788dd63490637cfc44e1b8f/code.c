#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf(" %d Positive");
    }
    else-if(n<0){
        printf("%d Negative");
    }
    else{
        printf("Zero");
    }
}