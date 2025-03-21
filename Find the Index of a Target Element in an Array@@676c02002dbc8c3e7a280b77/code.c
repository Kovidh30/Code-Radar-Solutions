#include<stdio.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i]==x){
            printf("%d",i);
            return 0;
        }
        else{
            printf("-1");
        }
    }
}