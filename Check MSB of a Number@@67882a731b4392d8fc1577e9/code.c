#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n&0x8000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}