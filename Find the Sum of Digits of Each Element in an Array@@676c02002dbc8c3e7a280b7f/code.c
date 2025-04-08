#include<stdio.h>

int main(){
    int n,rem,sum;
    scanf("%d",&n);

    int arr[n];

    void sum_of_digits(int arr[],int sum,int n){
        for(int i =0l i<n;i++){
            while(n != 0){
            sum += n%10;
            n = n/10;

            printf("%d",sum);

        }
    }

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    sum_of_digits(arr,sum);
    }
    

}