#include<stdio.h>

int main(){
    int n,rem,sum;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++){
        while(n != 0){
           sum += n%10;
           n = n/10;
        printf("%d",sum);      
        }
    }
    

}